//
// Created by keira on 1/27/2021.
//

#ifndef QUICKSORTC_QUICKSORT_H
#define QUICKSORTC_QUICKSORT_H

#include <stdbool.h>

int Sum(int a, int b);
void QuickSort(int arr[], int length);
void RecursiveQuickSort(int arr[], int left, int right);
long InsertionSort(int arr[], int left, int right);
int MedianOf3(int arr[], int left, int right, int midPoint);
int Partition(int arr[], int left, int right, int pivotIndex);
void Swap(int* a, int* b);

#endif //QUICKSORTC_QUICKSORT_H
