#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter the number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("Not a prime no.");
            break;
        }
        else{
            printf("Prime no.");
            break;
        }
    }
    return 0;
}