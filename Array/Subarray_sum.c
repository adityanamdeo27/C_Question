#include<stdio.h>
int main(){
    int arr[] = {1,2,-3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    printf("Enter value of k sub array:");
    scanf("%d",&k);
    int current_sum = 0;
    int max_Sum = 0;
    for(int i=0;i<k;i++){
        max_Sum += arr[i];
    }
    current_sum = max_Sum;
    for(int i=k;i<n;i++){
        current_sum += arr[i]-arr[i-k];
        if(current_sum>max_Sum)
            max_Sum = current_sum;
    }
    printf("Max subarray : %d",max_Sum);
    return 0;
}