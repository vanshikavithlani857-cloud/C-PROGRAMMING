#include<stdio.h>
int main()
{ 
    int n=2,t=0;
    while(n<500)
    {
    for(int i=2;i<n;i++)
    {  
        if(n%i==0)
        {
            t=1;
            break;
        }
        
    }
    if(t==0)
    {
        printf("%d",n);
    }
    n++;
    }
    return 0;
}