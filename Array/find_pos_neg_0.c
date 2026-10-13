#include<stdio.h>
int main(){
    int arr[5];
    int pos=0,neg=0,zero=0;
    printf("enter a num:");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Count Positive,Negative,Zero: ");
    for(int i=0;i<5;i++){
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;
        }
        else{
            zero++;
        }
    }
    printf("%d %d %d",pos,neg,zero);
    return 0;
}