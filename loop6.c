#include<stdio.h>
void main()
{

    int n;
    printf("Enter the value of  number n:\n");
    scanf("%d",&n);


    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d \n ",i);
        }

    }

    printf("This are the first n even numbers");
}
