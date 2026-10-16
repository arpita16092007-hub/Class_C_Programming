#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter a 5 element in array:");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int avg;
    int sum;
    for(int i=0;i<5;i++){
        sum +=arr[i];
    avg=sum/2;
    }
    printf("Average of all element from array:%d",avg);
    return 0;
}