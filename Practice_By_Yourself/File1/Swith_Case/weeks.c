#include<stdio.h>
int main(){
    int week;
    do{
        printf("Enter a month no. to check which weeks it belongs to:");
        scanf("%d",&week);
        switch(week){
            case 1:
            printf("Weeks 1 - 5\n");
            break;
            case 2:
            printf("Weeks 5 - 9\n");
            break;
            case 3:
            printf("Weeks 9 - 13\n");
            break;
            case 4:
            printf("Weeks 14 - 18\n");
            break;
            case 5:
            printf("Weeks 18 - 22\n");
            break;
            case 6:
            printf("Weeks 22 - 26\n");
            break;
            case 7:
            printf("Weeks 27 - 31\n");
            break;
            case 8:
            printf("Weeks 31 - 35\n");
            break;
            case 9:
            printf("Weeks 35 - 39\n");
            break;
            case 10:
            printf("Weeks 40 - 44\n");
            break;
            case 11:
            printf("Weeks 44 - 48\n");
            break;
            case 12:
            printf("Weeks 48 - 52\n");
            break;
            default :
            printf ("===============Invalid Month=================");
            break;
            
        }

    } while(week>=1 && week<=12);
    return 0;
}
