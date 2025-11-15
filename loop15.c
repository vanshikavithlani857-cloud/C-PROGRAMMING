#include<stdio.h>
int main()
{
    int num,n;
    float sum=0, mean;

    printf("Enter the value of n \n");
    scanf("%d",&n);
    
    for (int i = 1; i <=n; i++)
    {
        printf("Enter the num ");
        scanf("%d",&num);
        sum=num+sum;
    }
    printf("The sum of numbers is %f \n",sum);
    mean=sum/10;
    printf("The mean of numbers is %f ",mean);

    return 0;
}    