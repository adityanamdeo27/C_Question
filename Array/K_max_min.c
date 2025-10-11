#include <stdio.h>
int main() {
    int k;
    int arr[] = {3, 1, 4, 5, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter a value of k (1 to %d): ", n);
    scanf("%d", &k);
    if (k < 1 || k > n) {
        printf("Invalid value of k. Must be between 1 and %d.\n", n);
        return 1;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The %d smallest element is: %d\n", k, arr[k - 1]);
    printf("The %d largest element is: %d\n", k, arr[n - k]);
    return 0;
}
