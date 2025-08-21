#include <stdio.h>
int main() 
{
    float g,a,d,net;
    printf("Enter gross salary");
    scanf("%f", &g);
    a = g*0.10;
    d = g*0.03;
    /*net salary=gross salary+allowance-deduction*/
    net=g+a-d;

    printf("Net salary: %.2f\n", net);
}