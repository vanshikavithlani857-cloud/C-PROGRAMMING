#include<stdio.h>
int main()
{
    float A,H,L;
    printf("Enter the height of triangle:\n");
    scanf("%f",&H);

    printf("Enter the length of triangle:\n");
    scanf("%f",&L);

    A=(H*L)/2;
    printf("The area of triangle is: %.2f",A);

    return 0;

}