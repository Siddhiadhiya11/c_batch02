#include<stdio.h>
int main()
{
    int a;
    printf("Enter 1 , 2 0r 3 :");
    scanf("%d",&a);
    switch (a)
    {
        case 1 :
           printf("this is case 1");
           break;
        case 2:
            printf ("this is case 2");
            break;
        case 3:
            printf("this is case 3");
            break;
        default:
          printf("invalid case");
    }
    return 0;

}