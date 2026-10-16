#include<stdio.h>
int main(){
    
    int num1,num2;
    printf("Enter a num1:");
    scanf("%d",&num1);
    printf("Enter a num2:");
    scanf("%d",&num2);

    if(num1>num2){
         printf("Is Largest Than Num1: %d\n",num1);

    }else{
        printf(" Is Largest Than Num2: %d\n",num2);

    }
    return 0;

}