#include<stdio.h>
int main()
{
    int arr[100];
    int n,size,pos;
    printf("Enter the size of array:");
    scanf("%d",&size);

    printf("Enter the value of new number:");
    scanf("%d",&n);

    printf("Enter the value of position:");
    scanf("%d",&pos);

    for(int i=0;i<size;i++)
    {
        printf("Enter the value:\n");
        scanf("%d",&arr[i]);
    }
    for(int i=size;i>=pos;i--)
    {
        arr[i]=arr[i-pos+1];
    }
        arr[pos-1]=n;
        size++;
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);

    }

    return 0;

}