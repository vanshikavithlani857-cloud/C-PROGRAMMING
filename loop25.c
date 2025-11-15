#include<stdio.h>
int main()
{
    int num,rev=0,a,org;
    printf("Enter the number:");
    scanf("%d",&num);
    org=num;

    while(num !=0)
    {
        a = num % 10;
        num = num / 10;
        rev=rev*10+a;
    }
    
    if(org==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf(" not Palindrome");
    }
    return 0;

}