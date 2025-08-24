#include<stdio.h>
int main()
{
    int num,a;
    a=7;
    printf("Enter a number: \n");
    scanf("%d",&num);
    if(num%a ==0)
    {
        printf("%d is divisible by 7",num);

    }
    else
    printf("%d is not divisible by 7",num);
    return 0;

}