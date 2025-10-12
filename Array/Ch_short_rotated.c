#include <stdio.h>
int main() {
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int asc_breaks = 0;
    int desc_breaks = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            asc_breaks++;
        }
        if (arr[i] < arr[i + 1]) {
            desc_breaks++;
        }
    }
    if (arr[n - 1] > arr[0]) {
        asc_breaks++;
    }
    if (arr[n - 1] < arr[0]) {
        desc_breaks++;
    }
    if (asc_breaks == 0 || desc_breaks == 0) {
        printf("Array is sorted but not rotated\n");
    } else if (asc_breaks == 1) {
        printf("Array is sorted in ascending order and rotated\n");
    } else if (desc_breaks == 1) {
        printf("Array is sorted in descending order and rotated\n");
    } else {
        printf("Array is not sorted and rotated\n");
    }
    return 0;
}
