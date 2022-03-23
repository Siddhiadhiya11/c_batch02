#include<stdio.h>
int main()
{
    float maths,phy,chem,eng,bio,percentage,c;
    printf("Enter marks of maths,phy,chem,eng,bio :");
    scanf("%f%f%f%f%f",&maths,&phy,&chem,&eng,&bio);
    c = maths + phy + chem + eng + bio;
    percentage = (c / 500)*100;
    printf("The percentage obtained is %f",percentage);
    return 0;
}