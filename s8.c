#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    char rev[100];
    printf("Enter the string :\n");
    gets(st);
    strcpy(rev,st);
    if(strcmp(st,strrev(rev))==0)
    {
        printf("It is Palindrome");
    }
    else{
        printf("It is not Palindrome");
    }
    return 0;

}