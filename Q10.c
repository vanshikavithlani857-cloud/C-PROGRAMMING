#include<stdio.h>
int main()
{
    float dollar,rupees,pound;
    printf("Enter prize in dollar:");
    scanf("%f",&dollar);
    
    rupees=dollar*48;
    pound=rupees/70;

    printf("%f $= %f pound ",dollar,pound);
    return 0;

}
