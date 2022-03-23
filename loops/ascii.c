#include<stdio.h>
int main()
{
    char i;
    printf("ENter the value of i");
    scanf("%c",&i);
    while(i<=255)
    i = 0;
    i++;
    printf("%c\t",i);
    return 0;
}