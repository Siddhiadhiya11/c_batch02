#include<stdio.h>
int main ()
{
    float p,n,r,si,i;
    for(i=1; i<=4; i++)
    {
        printf("Enter the value of p,n and r :");
        scanf("%f%f%f",&p,&n,&r);
        si = p*n*r/100;
        printf("simple interest is %f",si);
        return 0;
    }
}