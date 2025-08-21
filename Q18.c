#include<stdio.h>
int main()
{
    float A,P,L,B;
    printf("Enter the length of rectangle:\n");
    scanf("%f",&L);

    printf("Enter the breadth of rectangle:\n");
    scanf("%f",&B);
    
    P=2*(L+B);

    printf("The perimeter of rectangle is: %f",P);

    A=L*B;
    printf("The area of rectangle is: %f",A);

    return 0;

}