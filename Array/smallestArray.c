#include<stdio.h>
int main(){
    int arr[5];
    

    printf("enter a num:");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);

    }
    int smallest=arr[0];
    printf("smallest array element:");


    for(int i=1;i<5;i++){
        if(arr[i]<smallest){
            smallest=arr[i];

        }
    }
    printf("%d",smallest);
    return 0;

}