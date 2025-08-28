#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b respectively:\n");
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        printf("%d is smaller than %d \n",a,b);
        printf("%d is greater than %d \n",b,a);
    }
    else if(a==b)
    {
        printf("%d is equal to %d \n",a,b);
    }

    else{
        printf("%d is smaller than %d",b,a);
        printf("%d is greater than %d",a,b);
    }
    return 0;
}
