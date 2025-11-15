#include<stdio.h>
#include<string.h>
int main()
{
    char st[]="0";
    int len;
    printf("Enter the string :\n");
    gets(st);
    len=strlen(st);

    printf("%d is the length of string %c",len,st);
    return 0;

}