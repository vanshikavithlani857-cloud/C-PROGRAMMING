#include<stdio.h>
int main()
{
    float dollar,rupees;
    printf("Enter prize in dollar:");
    scanf("%f",&dollar);
    
    rupees=dollar*48;

    printf("%f $= %f Rs ",dollar,rupees);
    return 0;

}