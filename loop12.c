#include<stdio.h>
int main()
{
    int i=1,N=0;
    char n[100];
    printf("Enter the value of n\n");
    scanf("%d",&N);

    printf("Enter your name:\n");
    scanf("%s",n);
    while(i<=N)
    {
        printf("%s\n",n);
        i++;
    }
    return 0;
}
