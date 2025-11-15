#include<stdio.h>
int main()
{
    int num;
    float sum=0, mean;

    for (int i = 1; i <=10; i++)
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