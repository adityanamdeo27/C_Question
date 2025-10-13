#include<stdio.h>
int main(){
    int arr[] = {5,-7,8,1,-3,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start=0,next=n-1;
    for(int i=0;i<n/2;i++){
        while (arr[i]>0 && start<next)
            start++;
        while (arr[i]<0 && start<next)
            next++;
        if(arr[start]<arr[next]){
            int temp = arr[start];
            
        }
    }
    for(int i=0;i<n;i++)
        printf("%d",arr[i]);
    return 0;
}