#include<stdio.h>
int main(){
    int arr[6];
    int target;
    printf("Enter an array:");

    for (int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the target:");
    scanf("%d",&target);
    for (int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]+arr[j]==target){
                printf("%d + %d = %d",arr[i],arr[j],target);
            }
        }
    }
    return 0;
}
