#include<stdio.h>
int main()
{
    int a1[2][3]={{1,2,3},{3,4,5}};
    int a2[2][3]={{2,3,4},{4,5,6}};
    int a3[2][3];
    int a4[2][3],a5[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            a3[i][j]=a1[i][j]*a2[i][j];
            a4[i][j]=a1[i][j]-a2[i][j];
            a5[i][j]=a1[i][j]+a2[i][j];


        }
    }
    printf("Multiplication:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("a3[%d][%d]: %d",i,j,a3[i][j]);
            printf("\n");

        }
    }
    printf("Subtraction:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("a4[%d][%d]: %d",i,j,a4[i][j]);
            printf("\n");

        }
    }
    printf("Addition:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("a5[%d][%d]: %d",i,j,a5[i][j]);
            printf("\n");

        }
    }
    return 0;
}