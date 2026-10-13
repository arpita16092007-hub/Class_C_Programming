#include <stdio.h>
int main( )
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a >=20){
        printf("%d\n",a);
    }else{
        printf("invlaid number");
    }
}