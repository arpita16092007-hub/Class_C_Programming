# include<stdio.h>
int main() {
    int salary,experience;

    printf("enter salary:");
    scanf("%d",&salary);
    printf("enter years of experience:");
    scanf("%d",&experience);

    if (salary >= 20000){
        if (experience >=2){
            printf("employee is eligible for bonus\n");
        }else{
            printf("employee isn't eligible for bonus\n");
    }}else{
        printf("employee isn't eligible for bonus\n");
    }
        
    return 0;
}