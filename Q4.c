#include<stdio.h>
int main()
{
    float num1,num2,divide;
    printf("First Number :");
    scanf("%f",&num1);

    printf("Second Number :");
    scanf("%f",&num2);

    divide=num1/num2;

    printf("The answer is : %f", divide);
    return 0;
}