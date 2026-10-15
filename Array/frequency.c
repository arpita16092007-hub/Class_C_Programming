#include<stdio.h>
int main(){
    int arr[5];

    printf("Enter an array:");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int count_freq=0;
    int target;

    printf("Enter target element:");
    scanf("%d",&target);

    for (int i = 0; i < 5; i++){
        if (arr[i]== target){
            count_freq ++;
        }
    }
    printf("Times:%d",count_freq);
    return 0;
}