#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    printf("The  first %d odd numbers are:\n",n);
    for(int i=1;i<=n;i++)
    {
        printf("%d \n",2*i-1);
    }
    return 0;
}
