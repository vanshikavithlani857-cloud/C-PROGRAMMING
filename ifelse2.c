#include<stdio.h>
int main()
{
    int a,b,c,smallest,greatest;
    printf("Enter the value of a,b and c respectively:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        smallest=a;
    }
    else if(b<c && b<a)
    {
       smallest=b;
    }
    else
    {
        smallest=c;
    }
    if(a>b && a>c)
    {
        greatest=a;
    }
    else if(b>c && b>a)
    {
       greatest=b;
    }
    else
    {
        greatest=c;
    }
     printf("%d is the smallest number\n",smallest);
     printf("%d is the greatest number\n",greatest);

     return 0;
}
