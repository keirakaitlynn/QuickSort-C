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
    int a, b;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter another number:");
    scanf("%d", &b);
    // keira: "Sum()":
    printf("%d + %d = %d", a, b, Sum(a, b));
    printf("\n");

    int arr[] = {1, 2, 3, 4, 5, 6, 7}; // 7 elements
    size_t length = (int) sizeof(arr) / sizeof(arr[0]); // = 7 (%ld)
    printf("Array:         ");
    PrintArray(&arr[0], length);
    printf("\n");

    // keira: "Swap()":
    Swap(&arr[0], &arr[1]);
    printf("Swapped Array: ");
    PrintArray(&arr[0], length);
    printf("\n");

    // keira: "IsOrdered()":
    printf("isOrdered:     ");
    bool isOrdered = IsOrdered(&arr[0], length);
    printf("%s", isOrdered ? "true" : "false");
    printf("\n");

    // keira: "Swap()":
    Swap(&arr[0], &arr[1]);
    printf("Array:         ");
    PrintArray(&arr[0], length);
    printf("\n");

    // keira: "IsOrdered()":
    printf("isOrdered:     ");
    isOrdered = IsOrdered(&arr[0], length);
    printf("%s", isOrdered ? "true" : "false");
    printf("\n");

    int arr2[] = {7, 1, 5, 3, 4, 2, 6};
/*
    printf("%d\n", MedianOf3(&arr2[0], 0, 6, 3));
    printf("%d\n", Partition(&arr2[0], 0, 6, 3));
*/

    // keira: "QuickSort()":
    PrintArray(&arr2[0], length);
    printf("\n");
    QuickSort(&arr2[0], length);
    PrintArray(&arr2[0], length);
    printf("\n");
    return 0;
}