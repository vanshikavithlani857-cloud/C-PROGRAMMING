#include<stdio.h>
int main()
{
    float A,P,L;
    printf("Enter the side of square:");
    scanf("%f",&L);
    
    P=4*L;

    printf("The perimeter of square is: %f",P);

    A=L*L;
    printf("The area of square is: %f",A);

    return 0;

}