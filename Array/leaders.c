#include<stdio.h>
int main(){
    int arr[] = {16,17,2,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            printf("%d ",arr[i]);
        }
    }
    printf("%d",arr[n-1]); //last always a leader
    return 0;
}