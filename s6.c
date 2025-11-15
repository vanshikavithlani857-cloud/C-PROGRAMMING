#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="apple";
    char s2[]="mango";

    int a=strcmp(s1,s2);
    if(a<0)
    {
        printf("%s is smaller than %s",s1,s2);
    }
    else if(a>0)
    {
        printf("%s is smaller than %s",s2,s1);
    }
    else
    {
        printf("%s is equal to %s",s1,s2);
    }
    return 0;
    
}
