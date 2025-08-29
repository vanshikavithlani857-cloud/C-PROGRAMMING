#include<stdio.h>
void main()
{

    int i,n,sum=0;
    printf("Enter the value of natural number n:\n");
    scanf("%d",&n);

    while(i<=n)
    {
        i++;
        if(i%2!=0)
        {
            sum=sum+i;
        }

    }
    printf("%d is the sum of first n odd numbers \n",sum);
}

