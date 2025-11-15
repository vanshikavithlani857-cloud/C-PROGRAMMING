#include<stdio.h>
int main()
{
    int num,a=0,org,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    org=num;

    while(num !=0)
    {
        a = num % 10;
        num = num / 10;
        sum=sum+(a*a*a);
    }
    
    if(org==sum)
    {
        printf("Armstrong");
    }
    else
    {
        printf(" not Armstrong");
    }
    return 0;

}