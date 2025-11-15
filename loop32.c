#include<stdio.h>
int main()
{ 
    int n=2,t=0,count=0;
    while(n<500)
    {
        t=0;
    for(int i=2;i<n;i++)
    {  
        if(n%i==0)
        {
            t=1;
            break;
        }
        
    }
    if (t==0)
        {
            count++;
        }
    n++;
    }
    printf("%d is the total number of prime numbers between 1 to 500",count);
    return 0;
}