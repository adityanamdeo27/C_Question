#include<stdio.h>
int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]),n2 = sizeof(arr2)/sizeof(arr2[0]); 
    printf("Union :\n");
    for(int i=0;i<n1;i++)
    printf("%d ",arr1[i]);
    for(int i=0;i<n2;i++)
    printf("%d ",arr2[i]);
    printf("\nIntersection :\n");
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j])
                printf("%d ",arr1[i]);
        }
    }
return 0;
    }