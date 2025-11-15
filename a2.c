#include<stdio.h>
int main()
{
    int values[10];
    int i;
    printf("Enter 10 Values:");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&values[i]);
    }
    printf("%d %d %d",values[3],values[6],values[8]);

    return 0;
}