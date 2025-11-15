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
            a=i;
        printf("%d\n",a);
        }
    }
    printf("These are the factors of %d",n);
    return 0;
}