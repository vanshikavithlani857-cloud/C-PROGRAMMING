#include<stdio.h>
int main()
{
    int n;
    printf("The  first 10 odd numbers are:\n");
    for(int i=1;i<=10;i++)
    {
        n=(2*i)-1;
        printf("%d \n",n);
    }
    return 0;
}
