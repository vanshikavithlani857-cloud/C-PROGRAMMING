#include<stdio.h>
int leap(int ,int );
int main()
{
    int n=4,year;
    printf("Enter the year:");
    scanf("%d",&year);
    leap(n,year);
    return 0;
}
int leap(int n,int year)
{
    if(year%n==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Non Leap Year");
    }
}