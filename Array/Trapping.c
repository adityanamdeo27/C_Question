#include<stdio.h>
void trapping(int arr[],int n){
    int left = 0,right = n-1;
    int left_Max = 0,right_Max = 0,water = 0;
    while(left<right){
        if(arr[left]<arr[right]){
            if(arr[left]>left_Max)
                left_Max = arr[left];
            else 
                water += left_Max - arr[left]; 
        left++;
        }
        else{
            if(arr[right]>right_Max)
                right_Max = arr[right];
            else
                water += right_Max - arr[right];
        right--;
        }
    }
    printf("Traped water is : %d",water);
}
int main(){
    int arr[] = {4,0,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    trapping(arr,n);
    return 0;
}