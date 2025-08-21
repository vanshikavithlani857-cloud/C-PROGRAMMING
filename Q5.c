#include<stdio.h>
int main()
{
    float num1,num2,add,subtract,multiply,divide;
    printf("First Number :");
    scanf("%f",&num1);

    printf("Second Number :");
    scanf("%f",&num2);
    
    add=num1+num2;
    subtract=num1-num2;
    multiply=num1*num2;
    divide=num1/num2;

    printf("The addition of two values is : %f\n", add);
    printf("The subtraction of two values is: %f\n",subtract);
    printf("The multiplication of two values is:%f\n",multiply);
    printf("The division of two values is : %f",divide);

    return 0;
}