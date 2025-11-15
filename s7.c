#include<stdio.h>
#include<string.h>
int main()
{
    char st[]="0";
    printf("Enter the string :\n");
    gets(st);

    printf("Reverse string: %s",strrev(st));
    return 0;

}