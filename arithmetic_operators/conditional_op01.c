#include<stdio.h>
int main ()
{
    int a , b , num ;
    printf(" Enter the two integers:");
    scanf("%d%d",&a,&b);
    num = (a>b) ? a : b;
    printf(" the greatest no. is %d", num);
    return 0;
}