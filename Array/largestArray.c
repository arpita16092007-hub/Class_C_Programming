#include<stdio.h>
int main(){
    int arr[5];
    

    printf("enter a num:");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);

    }
    int largest=arr[0];
    printf("Largest of array element:");
    for(int i=1;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];

        }
    }
    printf("%d",largest);
    return 0;

}