#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter the string s1:");
    gets(s1);

    printf("Enter the string s2:");
    gets(s2);


    printf("%s s1 is concatenated to s2 string",strcat(s2,s1));
    return 0;
}
