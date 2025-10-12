#include <stdio.h>

int main() {
    int arr[] = {-1,-2,-3,-4,5,-8};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int left = 0, right = size - 1;

    while (left < right) {
        while (arr[left] < 0 && left < right)
            left++;

        while (arr[right] >= 0 && left < right)
            right--;

        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    printf("Rearranged array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
