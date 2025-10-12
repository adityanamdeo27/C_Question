#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter 5 value of arr:");
    for (int i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    int last = arr[5 - 1];
    for (int i = 5 - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
    printf("Array after rotation: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}