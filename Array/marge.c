#include<stdio.h>
#include <stdio.h>
void merge(int arr1[], int n, int arr2[], int m) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] > arr2[0]) {
            int temp = arr1[i]; //swap arr1
            arr1[i] = arr2[0];
            arr2[0] = temp;
            int first = arr2[0];
            int k;
            for (k = 1; k < m && arr2[k] < first; k++) { //arr2 correct
                arr2[k - 1] = arr2[k];
            }
            arr2[k - 1] = first;
        }
    }
}
int main(){
    int arr1[] = {1,5,6,7,9};
    int arr2[] = {2,8};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    merge(arr1,n,arr2,m);
    for(int i=0;i<n;i++)
    printf("%d,",arr1[i]);
    for(int i=0;i<m;i++)
    printf("%d,",arr2[i]);
    return 0;
}