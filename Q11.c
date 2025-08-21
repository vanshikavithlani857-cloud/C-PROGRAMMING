#include<stdio.h>
int main()
{
    float gram,kg;
    printf("Enter the weight in grams:");
    scanf("%f",&gram);
    
    kg=gram/1000;

    printf("%f g= %f Kg " , gram , kg);
    return 0;

}