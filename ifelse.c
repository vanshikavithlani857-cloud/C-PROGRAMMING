#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of a and b respectively:");
    scanf("%d %d",&a,&b);

    if(a<b)
    {
        printf("%d is smallest value \n",a);
        printf("%d is largest value \n",b);
        printf("%d is smaller than %d\n",a,b);
        printf("%d is greater than %d \n",b,a);
    }
        if(a==b){
            printf("%d is equal to %d \n",a,b);
    }
    else
    {
    printf("%d is smaller than %d \n" ,b,a);
    printf("%d is greater than %d \n",a,b);
    }
    return 0;
}
