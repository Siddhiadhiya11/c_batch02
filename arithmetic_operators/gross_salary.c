#include<stdio.h>
int main()
{
    float basic_sal,da,hr,gross_sal;
    printf("Enter Rohit's basic salary :");
    scanf("%f",&basic_sal);
    da = (40*basic_sal)/100;
    hr = (20*basic_sal)/100;
    gross_sal = basic_sal + da + hr;
    printf("The gross salary of Rohit is %f",gross_sal);
    return 0;
}