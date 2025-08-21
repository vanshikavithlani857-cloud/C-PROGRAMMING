#include<stdio.h>
int main()
{
    float Kg,gram;
    printf("Enter the weight in Kg:");
    scanf("%f",&Kg);
    
    gram=Kg*1000;

    printf("%f Kg= %f g",Kg,gram);
    return 0;

}