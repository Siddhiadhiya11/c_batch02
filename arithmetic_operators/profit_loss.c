#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("Enter the cost price and selling price : ");
    scanf("%d%d",&cp,&sp);
    p = sp - cp;
    l = cp - sp;
    
    if (p>0)
       printf("We have made profit");
    else if (l>0)
       printf("We are in loss");
    else if (p==0)
       printf("We have niether made profit nor we are in loss");
    return 0;
}