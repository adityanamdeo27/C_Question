#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d elements with missing no. \n", n - 1);
    int actual_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        actual_sum += arr[i];
    }
    int expected_sum = n * (n + 1) / 2;
    int missing_number = expected_sum - actual_sum;
    printf("The missing number is: %d\n", missing_number);
    return 0;
}
