#include <stdio.h>
int maxProduct(int arr[], int n) {
    int max_product = arr[0];
    for (int i = 0; i < n; i++) {
        int product = 1;
        for (int j = i; j < n; j++) {
            product *= arr[j];
            if (product > max_product) {
                max_product = product;
            }
        }
    }
    return max_product;
}
int main() {
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxProduct(arr, n);
    printf("Maximum product subarray is: %d\n", result);

    return 0;
}