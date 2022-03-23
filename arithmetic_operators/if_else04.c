#include<stdio.h>
int main()
{
    int a1 , a2 , a3 , triangle;
    printf("Enter the value of angles : ");
    scanf("%d%d%d",&a1,&a2,&a3);
    triangle = a1 + a2 + a3;
    if (triangle == 180)
       printf("It is a triangle");
    else
       printf("It is not a triangle");
    return 0;
}