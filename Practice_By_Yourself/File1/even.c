#include<stdio.h>
int main(){

    int num;
    printf("enter a num to find even num:");
    scanf("%d",&num);

    if (num%2==0){
        printf("The Num Is Even \n");
    }else{
        printf("The Num Is Not Even \n");
    }

    return 0;


}