#include<stdio.h>
int main(){
    int arr1[] = {1,2,5,7,9};
    int arr2[] = {5,4,1,3,7};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int targrt = 0;
    printf("Enter value of target :");
    scanf("%d",&targrt);
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]+arr2[j]==targrt)
                printf("pair is %d,%d\n",arr1[i],arr2[j]);
        }
    }
    return 0;
}