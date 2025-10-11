#include<stdio.h>
int main(){
    int arr[] = {5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++)
            if(arr[j]<arr[j+1]){
                int temp = arr[j+1];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
        }
    }
    printf("Shorted array\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}