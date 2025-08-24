#include<stdio.h>
int main()
{
    int total,avg,s1,s2,s3,a;
    printf("Enter the marks of three subjects respectively:\n");
    scanf("%d %d %d",&s1,&s2,&s3);
    
    total=s1+s2+s3;
    avg=total/3;
    printf("The total and average marks of three subjects is %d %d \n",total,avg);
    if(avg>=70)
    {
        printf("Student got destinction \n");
    }
    else if(avg>=60)
    {
        printf("Student got first class \n");
    }
    else if(avg>=50)
    {
        printf("Student got second class\n");

    }
    else if(avg>=35)
    {
        printf("Student got third class\n");
    }
    else 
    {
        printf("Student got failed \n");
    }
    if(s1<35 || s2<35 || s3<35)
    {
        printf("Student failed the exam");
    }
    return 0;
}