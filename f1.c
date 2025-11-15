#include<stdio.h>
int power(int ,int);
int main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("%d is the value of %d raised to %d",power(a,b),a,b);

    return 0;

}
int power(int a,int b)
{
    int p=1;
    for(int i=1;i<=b;i++)
    {
        p=p*a;
    }
    return(p);
}
