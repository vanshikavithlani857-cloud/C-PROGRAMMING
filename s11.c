#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    printf("Enter the string :\n");
    gets(st);
    int len=strlen(st);

    printf("The string in vertical form is:\n");
    for(int i=len-1;i>=0;i--)
    {
        printf("%c\n",st[i]);
    }
    return 0;

}