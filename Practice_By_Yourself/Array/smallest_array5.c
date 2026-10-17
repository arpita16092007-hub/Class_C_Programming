#include<stdio.h>
int main(){
    int arr[5];
    int smallest=0;
    printf("Enter a array fo 5 element:");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<5;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("The smallest element in array is:%d",smallest);
    return 0;
}