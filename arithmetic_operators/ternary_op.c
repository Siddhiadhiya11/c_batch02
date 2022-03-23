#include<stdio.h>
int main ()
{
    int x,y,z,num;
    printf("Enter the integers :");
    scanf("%d%d%d",&x,&y,&z);
    num = (x<y) ? (x<z ? z : x) : (y<z ? z : y);
    printf("The greatest number is %d",num);
    return 0;
}