/** 
* ===========================================================
* Name: Benjamin Tat
* Section: T6 Coffman
* Project: Bubble / Shell Sorts
* ===========================================================
* Instructions:
*    1) Complete TASKS Below
*    2) You may need a swap helper function
*    3) You may also need insertionSortInterleaved() for shell sort
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sortfuncts.h"

int main() {
    int nums[N];

    // seed random number generator
    srand((unsigned)(time(NULL))); // use for development/debugging
    srand(2023); // uncomment for submission

    // fill the array with random numbers
    fillArray(nums);

    /* TASK 0 - implement the function, bubbleSort() below
     * 0) Call the function and verify that it works
     */
    bubbleSort(nums, N);
    printf("Bubble Sort: ");
    printArray(nums);

    /* TASK 1 - implement the function, shellSort() below
     * 0) Refill the array to get a new random set of
     * numbers.
     * 1) Call the function and verify that it works
     */
    fillArray(nums);
    int gapValues[] = {5,3,1};  // number/size of sets to sort
    shellSort(nums, N, gapValues, 3);
    printf("Shell Sort: ");
    printArray(nums);

    return 0;
}