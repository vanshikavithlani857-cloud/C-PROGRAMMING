#include<stdio.h>
int main()
{
    int sum=0;
    for (int i = 1; i <=7; i++)
    {
        sum=(13*i)+sum;
    }
    printf("%d is the sum of nos divisible by 13",sum);
    return 0;
    
}