#include<stdio.h>
void main()
{

    int n,sum=0;
    printf("Enter the value of natural number n:\n");
    scanf("%d",&n);


    for(int i=1;i<=n;i++)
    {
       sum=sum+i;

    }
    printf("%d is the sum of first n natural numbers \n",sum);
}
