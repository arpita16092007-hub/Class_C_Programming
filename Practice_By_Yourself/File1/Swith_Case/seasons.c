#include<stdio.h>
int main(){
    int month;
    do{
        printf("Enter the month b/w 1 tho 12:");
        scanf("%d",&month);
        switch(month){
            case 3:
            case 4:
            case 5:
            case 6:
                printf("Summer Season\n");
                break;
            case 7:
            case 8:
            case 9:
                printf("Monsoon Season\n");
                break;
            case 10:
            case 11:
            case 12:
            case 1:
            case 2:
                printf("Winter Season\n");
                break;
            default:
                printf("=====||||=====Invalid Month=====||||=====");
                break;

        }
    }
    while(month>=1 && month<=12);
    return 0;

}