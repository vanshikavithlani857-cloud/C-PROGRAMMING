#include<stdio.h>
int main()
{
    int n,fib=0,t1=1,t2=1;
    printf("Enter the number n:");
    scanf("%d",&n);
    printf("Fibonacci series upto %d\n",n);

    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("%d,",t1);
        }
        if(i==2)
        {
            printf("%d,",t2);
        }
        if(i>2)
        {
        fib=t1+t2;
        printf("%d,",fib);
        t1=t2;
        t2=fib;
        }
    }
    return 0;
}