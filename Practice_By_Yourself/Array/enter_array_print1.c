#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter a 10 element array:");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("--------------------");
    printf("Display all the element");
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}