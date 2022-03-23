#include<stdio.h>
int main ()
{
    float income , tax ;
    printf("Enter the income of employee : ");
    scanf("%f",&income);
    
    if(income >= 250000 && income <= 500000)
   { 
       printf("The tax is %f",income*0.5);
   }
    else if (income>=500000 && income <= 1000000)
    {
        printf("the tax is %f",income*0.2);
    }
    else if (income < 1000000)
    {
        printf("The tax is %f",income*0.3);
    }
    else 
    printf("There is no taxes payable");
    return 0;
}