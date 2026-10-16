#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter a arrary:");

    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int sum;

    for (int i = 0; i < 5; i++){
        sum +=arr[i];
    }
    printf("The sum of array element:%d",sum);
    return 0;
}