#include<stdio.h>
int main()
{
    int num1 , num2 , div;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    div = num1/num2;
    printf("The division is %d", div);
    return 0;
}