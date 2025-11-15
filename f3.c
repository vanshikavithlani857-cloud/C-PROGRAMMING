#include<stdio.h>
int fact(int );
int main()
{
    int n,p=1;
    printf("Enter the number:");
    scanf("%d",&n);

    printf("%d is the factorial of the number %d",fact(n),n);
}
int fact(int n)
{
    int r=1;
    if(n>1)
    {
    r=n*fact(n-1);
    }
    return(r);

}