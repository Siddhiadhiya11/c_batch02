#include<stdio.h>
#include<string.h>
int main()
{
    char source[20] = "Siddhi";
    char target[20]= "Adhiya";
    strcat(source,target);
    printf("source string = %s\n",source);
    printf("target string = %s\n",target);
    return 0;
}