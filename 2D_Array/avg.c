#include<stdio.h>
int main(){
    int arr[3][3]={{8,10,5},{6,7,9},{15,10,12}};
    int sum=0;
    int avg=0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            sum=sum+arr[i][j];
        }
    }
    avg=sum/2;
    printf("avg=%d",avg);
    return 0;
}