#include<stdio.h>
int main()
{
    float Far,Cel;
    printf("Enter the value of Fahrenheit Scale =");
    scanf("%f",&Far);
    Cel=((Far-32)*5)/9;

    printf("The new reading Celisus scale is =%f",Cel);
    return 0;
}

