#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter the temperature in C :");
    scanf("%f",&C);
    
    F=(9/5*C)+32;

    printf("%f F= %f C ",F,C);
    return 0;

}