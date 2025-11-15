#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter the string s1:");
    gets(s1);

    printf("%s is copied to s2 string",strcpy(s2,s1));
    return 0;
}
