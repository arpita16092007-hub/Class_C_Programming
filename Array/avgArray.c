#include<stdio.h>
int main(){
    int arr[5];
    int sum=0;
    int avg=0;
    printf("enter a num:");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);

    }
    printf("average of array element:");
    for(int i=0;i<5;i++){
        sum +=arr[i];
         
        
    }
    avg=sum/5;
    printf("%d",avg);
    return 0;

}