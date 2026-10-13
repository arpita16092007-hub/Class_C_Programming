#include <stdio.h>

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for (int i=0;i<n+1;i++){
        printf("%d\n",i);
    }
    return 0;
       
}