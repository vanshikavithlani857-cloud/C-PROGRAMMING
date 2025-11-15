#include<stdio.h>
int main()
{
    int n,a,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);

    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a=i;
            sum=sum+a;
        }
    }
    if(sum==n)
    {
        printf("Perfect no.");
    }
    else{
        printf("Not a Perfect no.");
    }
    return 0;
}