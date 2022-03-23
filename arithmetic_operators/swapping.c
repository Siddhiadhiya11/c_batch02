#include<stdio.h>
int main()
{
   int a=10,b=50,c;
   c = a;
   a = b;
   b = c;
   printf("After swapping the value a = %d\n",a);
   printf("Ater swapping the value b = %d",b);
   return 0;
}