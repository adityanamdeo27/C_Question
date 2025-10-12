#include<stdio.h>
int main(){
    int arr[] = {1,-5,9,-9,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int current_sum = 0;
    for(int i=0;i<n;i++){
        current_sum += arr[i];
        if(current_sum>max)
            max = current_sum;
        if(current_sum<0)
            current_sum = 0;
    }
    printf("Maxsub array sum is :%d",max);
    return 0;
}