#include<stdio.h>
int main()
{
    int i=1;
    char n[100];
    printf("Enter your name:\n");
    scanf("%s",n);
    while(i<=5)
    {
        printf("%s\n",n);
        i++;
    }
    return 0;
}
