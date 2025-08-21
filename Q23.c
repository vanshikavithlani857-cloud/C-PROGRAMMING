#include<stdio.h>
int main()
{
    float n1,n2,n3,total,avg;
    printf("Enter the first number:\n");
    scanf("%f",&n1);

    printf("Enter the second number:\n");
    scanf("%f",&n2);

    printf("Enter the third number:\n");
    scanf("%f",&n3);

    total=n1+n2+n3;
    avg=total/3;

    printf("The total is:%.2f\n",total);
    printf("The average is:%.2f",avg);
    return 0;
}