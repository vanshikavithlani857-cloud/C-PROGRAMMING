#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter the temperature in F :");
    scanf("%f",&F);
    
    C=5/9*(F-32);

    printf("%f C= %f F ",C,F);
    return 0;

}