#include <stdio.h>
int main() {
    int i=1,n;
    printf("enter a number n:");
    scanf("%d",&n);

    while ((i<=n))
    {
        printf("%d",i);
        i+=2;

    }
    return 0;
    
}