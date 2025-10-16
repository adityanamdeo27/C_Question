#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[100] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    int times = 0;
    printf("Which element frequency you want :");
    scanf("%d",&times);
    printf("Element %d occurs %d times.\n", times, freq[times]);
    return 0;
}