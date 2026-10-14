#include<stdio.h>
#include<limits.h>

int main(){
    int arr[7];
    int smallest= INT_MAX;
    int sec_smallest= INT_MAX;
    printf("Enter a number:");

    for(int i=0;i<7;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<7;i++){
        if(arr[i]<smallest){
            sec_smallest=smallest;
            smallest=arr[i];
        }else if(arr[i]<sec_smallest && arr[i] != smallest){
            sec_smallest=arr[i];
        }
    }
    printf("Smallest= %d, Second_Smallest= %d",smallest,sec_smallest);
    return 0;

}