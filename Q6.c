#include<stdio.h>
int main()
{
    float hours,minutes;
    printf("Enter the time in hours:");
    scanf("%f",&hours);
    
    minutes=hours*60;

    printf("%f hours= %f minutes",hours,minutes);
    return 0;

}