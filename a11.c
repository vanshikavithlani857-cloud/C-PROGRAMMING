#include<stdio.h>
int main()
{
    int arr[10];
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(int i=0;i<10;i++)
    {
        printf("Enter the value:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10-n;i++)
    {
        arr[i]=arr[i+n];
    }
    for(int i=10-n;i<10;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);

    }

    return 0;

}