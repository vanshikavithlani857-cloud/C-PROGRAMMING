#include<stdio.h>
int main()
{
    float hours,minutes;
    printf("Enter the time in minutes:");
    scanf("%f",&minutes);
    
    hours=minutes/60;

    printf("%f minutes= %f hours",minutes,hours);
    return 0;

}
