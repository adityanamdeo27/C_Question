#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 4, 6, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int i = 0, j = 0;
    printf("Intersection of the two arrays: ");
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    printf("\n");
    return 0;
}
