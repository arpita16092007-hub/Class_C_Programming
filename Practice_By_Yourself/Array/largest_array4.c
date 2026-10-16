#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter a 5 element of array:");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int largest=0;
    for(int i=0;i<5;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("The largest element is:%d",largest);
    return 0;
}