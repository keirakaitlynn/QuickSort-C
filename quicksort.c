//
// Created by keira on 1/27/2021.
//

#include "quicksort.h"
#include <stdio.h>

int Sum(int a, int b) {
    return a + b;
}

void QuickSort(int arr[], int length) {
    RecursiveQuickSort(arr, 0, length-1); // [left, right]
}

void RecursiveQuickSort(int arr[], int left, int right) {
    // kkkkk: 1. BASE CASE: Use Insertion Sort to sort any subsequence of 10 elements or less.
    int numOfElements = (right - left) + 1;
    if (numOfElements <= 10) {
        InsertionSort(arr, left, right); // DONT INSERTION SORT ENTIRE ARRAY LENGTH
        return;
    }

    // kkkkk: 2. Select pivotIndex (via Median-of-3).
    int midPoint = (left + right) / 2;
    int medianOf3INDEX = MedianOf3(arr, left, right, midPoint);

    // kkkkk: 3. Partitioning Step (via Partitioning Algorithm).
    //           (so that values <= m are to its left & values > m are to its right)
    int pivotIndex = Partition(arr, left, right, medianOf3INDEX);

    // kkkkk: 4. LAST: Sort partitions recursively (via RecursiveQuickSort).
    RecursiveQuickSort(arr, left, pivotIndex-1); // left partition (values <= m)
    RecursiveQuickSort(arr, pivotIndex+1, right); // right partition (values > m)
}

long InsertionSort(int arr[], int left, int right) {
    // kkkkk: i represents the # of values in the correct spot ("sorted")
    for (int i = left + 1; i <= right; i++) { // kkkkk: i depends on right
        int j, temp = arr[i]; // make a copy of a[i] // NOTE: does not increase with length of the array, since these values get thrown away after every iteration ---> doesn't need any memory (O(n)) or "in place"
        // kkkkk: takes value & shifts it to the left until it is in the right spot.
        for (j = i - 1; j >= 0; j--) { // start "moving left" // NOTE: j depends on i, and i depnds on right
            if (arr[j] > temp) {
                arr[j + 1] = arr[j]; // inversion detected; move a[j] to the right
            }
            else {
                break;
            } // index j is one spot to the left of where temp belongs
        }
        arr[j+1] = temp;
    }
}

// helper method's for sorting algorithms
// returns index of medianOf3 value
int MedianOf3(int arr[], int left, int right, int midPoint) {
    // check for b
    if ((arr[left] < arr[right] && arr[right] < arr[midPoint]) || (arr[midPoint] < arr[right] && arr[right] < arr[left]))
    { return right; }
    // check for a
    else if ((arr[right] < arr[left] && arr[left] < arr[midPoint]) || (arr[midPoint] < arr[left] && arr[left] < arr[right]))
    { return left; }
    else { return midPoint; }
}

int Partition(int arr[], int left, int right, int pivotIndex) {
    int pivotValue = arr[pivotIndex];
    Swap(&arr[pivotIndex], &arr[right]); // move pivotValue to end of array ("arr")

    int store = left; // "store" marks beginning of the "new" array
    for (int i = left; i < right; i++) { // iterate thru given array (left -> right)
        if (arr[i] <= pivotValue) { // overwrite value @ "store" w/ the next value that is less than the pivotValue
            Swap(&arr[store], &arr[i]);
            store++;
        }
    }
    Swap(&arr[right], &arr[store]); // swap pivotValue to its final position
    return store;
}

// KKKKK: { 1, 2 } -> Swap(&arr[0], &arr[1]); -> { 2, 1 }
void Swap(int* a, int* b) {
    int temp1 = *a;
    *a = *b;
    *b = temp1;
}