#include <stdio.h>
 
int main () 
{

   /* local variable definition */
   int a = 10;

   /* do loop execution */
   do {
      printf("value of a: %d\n", a);
      a = a + 1;//a++
   }while( a < 20);
 
   return 0;
}