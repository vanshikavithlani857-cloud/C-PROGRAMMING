#include<stdio.h>
int main()
{
    int a1[4]={1,2,3,5};
    int n=4;
    for(int i=0;i<n/2;i++)
    {
        int t=a1[i];
        a1[i]=a1[n-i-1];
        a1[n-i-1]=t;
        //printf("a1[%d] :%d\n",i,a1[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("a1[%d] :%d\n",i,a1[i]);
    }
    
    return 0;
}