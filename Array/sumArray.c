#include<stdio.h>
int main(){
    int arr[10];
    int sum=0;
    printf("enter a num:");
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);

    }
    printf("sum of array element:");
    for(int i=0;i<10;i++){
        sum +=arr[i];
        
    }
    printf("%d",sum);
    return 0;

}