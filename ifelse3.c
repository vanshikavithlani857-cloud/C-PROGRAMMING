#include<stdio.h>
int main()
{
    float net,g,a,d;
    printf("Enter the value of gross salary:\n");
    scanf("%f",&g);

    if(g>10000)
    {
        a=g*0.1;
        d=g*0.03;
    }

    else if(10000>g>5000)
    {
        a=g*0.07;
        d=g*0.02;
    }
    
    net=g+a-d;
    printf("The net salary is:%f",net);
    return 0;
}