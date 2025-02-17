#include<stdio.h>

int main()
{
    int num1,num2,num3;
    float avg;
    printf("ENTER THE NUMBER :");
    scanf("%d",&num1);
    printf("ENTER THE NUMBER :");
    scanf("%d",&num2);
    printf("ENTER THE NUMBER :");
    scanf("%d",&num3);


    avg=(num1+num2+num3)/3;


    printf("The average of three numbers is :%0.01f",avg);
    return 0;

}


