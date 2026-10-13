#include<stdio.h>
int main(){
    int arr[6];
    int sum=0;

    printf("enter a num: ");
    for (int i=0;i<6;i++){
        
        scanf("%d",&arr[i]);
    }
    printf("print array\n");
    for (int i=0;i<6;i++){
        sum += arr[i];
    }
    printf("sum: %d\n", sum);


    return 0;
}