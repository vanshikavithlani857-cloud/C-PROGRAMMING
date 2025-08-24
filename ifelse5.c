#include<stdio.h>
int main()
{
    float net,g,d;
    printf("Enter the value of gross sales:\n");
    scanf("%f",&g);
    if(g>20000)
    {
        d=g*0.15;
    }
    else if(g>10000)
    {
        d=g*0.1;
    }
    else
    {d=g*0.05;}

    net=g-d;
    printf("%.2f is the net sales",net);
    return 0;
}