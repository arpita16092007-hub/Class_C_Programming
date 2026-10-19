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
            if(arr[i] < arr[j]){
                tam = arr[i];   
                arr[i] = arr[j]; 
                arr[j] = tam;    
             }
        }
    }
    printf("decending order:");
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}