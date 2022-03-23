#include<stdio.h>
int main()
{
    int num,i=1,fact=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(i<=num)
    {
        fact = fact * i;
        i++;
    }
    printf("The factorial value is %d = %d",num,fact);
    return 0;
}