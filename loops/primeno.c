#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i = 2 ; i <= num-1 ; i++)
    {
        if(num % i == 0)
        printf("number is not a prime number");
        
        else if (i == num)
    
        printf("number is a prime number");

    }
    return 0;
}