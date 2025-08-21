#include<stdio.h>
int main()
{
    float A,R;
    printf("Enter the radius of circle:");
    scanf("%f",&R);

    A=(22*R*R)/7;
    printf("The area of circle is: %.2f",A);

    return 0;

}