#include<stdio.h>
int main ( ){
    int n,i;
    
    printf("enter a number n :");
    scanf("%d",&n);

    long long fact=1;
    while (i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("%lld",fact);
    return 0;
    
}
