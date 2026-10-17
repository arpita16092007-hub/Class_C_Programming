#include<stdio.h>
int main(){
    int arr[6];
    printf("Enter a 6 element in a array:");
    for (int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    int count_ev=0;
    int count_od=0;
    for(int i=0;i<6;i++){
        if(arr[i]%2==0){
            count_ev +=1;
        }
        else{
            count_od +=1;
        }
    }
    printf("Even_Count=%d\nOdd_Count=%d",count_ev,count_od);
    return 0;
}