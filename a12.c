#include<stdio.h>
int main()
{
    int arr[100];
    int n,size;
    printf("Enter the size of array:");
    scanf("%d",&size);

    printf("Enter the value of new number:");
    scanf("%d",&n);

    for(int i=0;i<size;i++)
    {
        printf("Enter the value:\n");
        scanf("%d",&arr[i]);
    }
    for(int i=size;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
        arr[0]=n;
        size++;
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);

    }

    return 0;

}