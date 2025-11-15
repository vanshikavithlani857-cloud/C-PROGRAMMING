#include<stdio.h>
int swap(int ,int );
int main()
{
    int a=20,b=30;
    swap(a,b);
    printf("a=%d\n b=%d\n",a,b);
    return 0;

}
int swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("a= %d\n b=%d",a,b);
    return 0;
}