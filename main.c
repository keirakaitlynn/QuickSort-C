#include <stdio.h>
#include "quicksort.h"
#include "arrays.h"
#include <string.h>

// XXXXX:       (fix ASAP!)         (#fc00e3)
// KEIRA:       (main headers)      (#ff006e)
// KKKKK:       (sub-headers)       (#55618d)
// kkkkk:       (sub sub-headers)   (#f5aaab)
//
// TODO:        (incomplete)        (#975cff)
// REVIEW:      (check / relay)     (#6160ff)

int main(void)
{
    int arr[] = {7, 1, 5, 3, 4, 2, 6}; // 7 elements
    size_t length = (int) sizeof(arr) / sizeof(arr[0]);

    PrintArray(&arr[0], length);
    printf("\n");

    QuickSort(&arr[0], length);

    PrintArray(&arr[0], length);
    printf("\n");

    return 0;
}