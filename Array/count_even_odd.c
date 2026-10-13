#include<stdio.h>
int main(){
    int arr[5];
    int even=0,odd=0;
    printf("enter a num:");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Count Even : ");
    printf("%d\n ",even);
    printf("Count Odd: ");
    printf("%d\n",odd);
    
    
    return 0;
}