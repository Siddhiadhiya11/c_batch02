#include<stdio.h>
int main ()
{
    float C,F;
    printf("Enter the temprature in celsius :");
    scanf("%f",&C);
    F = (C*1.8)+32;
    printf("The temprature in fahrenheit is %f",F);
    return 0;
}