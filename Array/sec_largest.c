#include<stdio.h>
#include<limits.h>

int main(){
    int arr[7];
    int largest= INT_MIN;
    int sec_largest= INT_MIN;
    printf("Enter a number:");

    for(int i=0;i<7;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<7;i++){
        if(arr[i]>largest){
            sec_largest=largest;
            largest=arr[i];
        }else if(arr[i]>sec_largest && arr[i] != largest){
            sec_largest=arr[i];
        }
    }
    printf("Largest= %d, second_Largest= %d",largest,sec_largest);
    return 0;

}