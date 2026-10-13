#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter a number and store in the array:");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);

    }
    printf("Print array element:");
    for (int i=0;i<10;i++){
        printf("%d",arr[i]);
    }
    return 0;
    
}