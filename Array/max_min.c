#include<stdio.h>
#include<limits.h>
int main(){
    int arr[] = {-10,2,6,4,7,8,0};
    int max=INT_MIN,min=INT_MAX;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max = arr[i];
        if(min>arr[i])
            min = arr[i];
    }
    printf("Maximum element of array : %d\n",max);
    printf("Minimum element of array : %d\n",min);
}