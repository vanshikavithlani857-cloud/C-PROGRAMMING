#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter the value of n:");
    scanf("%d",&n);

    printf("The factorial of %d is :\n",n);
    for(int i=1;i<=n;i++)
    {
        fact=i*fact;
    }
    printf("%d",fact);
    return 0;
}
