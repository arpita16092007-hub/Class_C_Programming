#include<stdio.h>
int main(){

    int num;
    printf("enter a num to find odd num:");
    scanf("%d",&num);

    if (num%2!=0){
        printf("The Num Is Odd \n");
    }else{
        printf("The Num Is Not Odd \n");
    }

    return 0;


}