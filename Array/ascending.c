#include<stdio.h>
int main(){

    int arr[6];
    int n=6;
    int tam;

    printf("Enter an array:");

    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        for (int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]){
                tam = arr[i];   // 1. Save the larger number first!
                arr[i] = arr[j]; // 2. Bring the smaller number to the front
                arr[j] = tam;    
             }
        }
    }
    printf("asending order:");
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}