#include<stdio.h>
int main()
{
    float I,P,N,R;
    printf("Enter the value of P :\n");
    scanf("%f",&P);

    printf("Enter the value of N:\n");
    scanf("%f",&N);
    printf("Enter the value of R:\n");

    scanf("%f",&R);

    I=(P*N*R)/100;

    printf("The value of I is: %f",I);
    return 0;

}