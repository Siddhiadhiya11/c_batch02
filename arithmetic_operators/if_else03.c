#include<stdio.h>
int main ()
{
    int num;
    printf(" Enter the number : ");
    scanf(" %d ", &num);

    if(num<0)
    {
    printf("The number is a negative number");
    }
    else  
    {
    printf("The number is positive number");
    }
    return 0;
}