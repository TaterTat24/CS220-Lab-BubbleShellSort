/** 
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6 Coffman
 * Project: Bubble / Shell Sorts
 * ===========================================================
 */
#include "sortfuncts.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Bubble Sort
void bubbleSort(int list[], int listSize) {
    bool swapped;
    int temp;
    int n = listSize;
    do {
        swapped = false;
        // swap larger items with smaller until
        // next largest item is in correct position
        for (int i = 1; i <= n - 1; i++) {
            // swap the ith and (i-1)th element if the 
            // (i-1)th element is smaller
            if (list[i-1] > list[i]) {
                temp = list[i-1];
                list[i-1] = list[i];
                list[i] = temp;
                swapped = true;
            }
        }
        n = n - 1;
    } while (swapped);
}

// Shell Sort
void shellSort(int list[], int listSize, int gapValues[], int gapSize) {
    for (int gapIndex = 0; gapIndex < gapSize; gapIndex++) {
        int gap = gapValues[gapIndex];
        // Perform an insertion sort on each of the sublists
        // as delinated by the current gap value
        for (int i = gap; i < listSize; i++) {
            int temp = list[i];
            int j;
            for (j =  i; (j >= gap) && (list[j - gap] > temp); j = j - gap) {
                list[j] = list[j - gap];
            }
            list [j] = temp;
        }
    }
}

// fills an array of size n with random values
void fillArray(int array[]) {
    // fill array with random ints from 0 to 29
    for (int i = 0; i < N; i++) {
        array[i] = (int)random() % 30;
    }
}

void printArray(int nums[]) {
    for (int i = 0; i < N; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
