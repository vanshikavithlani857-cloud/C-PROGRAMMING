#include<stdio.h>
#include<string.h>
int main()
{
    char st[]="0";
    printf("Enter the string :\n");
    gets(st);

    printf("%s is the lower case of string",strlwr(st));
    return 0;
}