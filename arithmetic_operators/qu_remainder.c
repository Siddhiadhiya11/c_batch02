#include<stdio.h>
int main ()
{
    int a, b, q, r;
    printf("Enter two integers : ");
    scanf("%d%d",&a,&b);
    q = a/b;
    r = a%b;
    printf("The q is %d\n",q);
    printf("The remainder is %d",r);
    return 0;
}