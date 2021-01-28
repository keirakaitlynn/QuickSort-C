//
// Created by keira on 1/27/2021.
//

#include "arrays.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

void PrintArray(int* arr, int length){
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}

bool IsOrdered(int* arr, int length) {
    for (int i = 0; i < (length - 1); i++) {
        if (arr[i] >= arr[i + 1]) { return false; }
    }
    return true;
}