#include<stdio.h>
int main()
{
    int num,rev_num,d1,d2,d3;
    printf("Enter the number :");
    scanf("%d",&num);
    d3 = num % 100;
    d3  = num/100;
    d2 = num % 10;
    d2 = num/10;
    d1 = num % 10;
    rev_num = d3 * 100 + d2 * 10 + d1 * 1;
    printf("The reverse number is %d",rev_num);
    return 0;


}