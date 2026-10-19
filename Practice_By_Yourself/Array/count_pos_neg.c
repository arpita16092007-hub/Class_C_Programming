//Write a C program to input n integers into an array and 
//count the number of positive, negative, and zero elements.
#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter a 5 element in array:");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int pos_count=0;
    int neg_count=0;
    int zer_count=0;
    for(int i=0;i<5;i++){
        if(arr[i]>0){
            pos_count += 1;
        }else if(arr[i] < 0){
            neg_count += 1;
        }else{
            zer_count += 1;
        }
    }
    printf("Count_No.of.Positive,Negative,Zero:%d,%d,%d",pos_count,neg_count,zer_count);
    return 0;
}