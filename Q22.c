#include <stdio.h>
int main()
{
    float gs,d,sales;
    printf("Enter gross sales:");
    scanf("%f", &gs);
    d= gs * 0.10;
    sales=gs-d;

    printf("Net sales is: %f\n",sales);
    return 0;
}