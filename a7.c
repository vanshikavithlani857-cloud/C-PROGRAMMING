#include<stdio.h>
int main()
{
    int a1[4][4]={{1,2,3,5},{3,4,5,6},{4,5,6,7},{3,6,7,8}};
    int aT[4][4]={0,0};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            aT[j][i]=a1[i][j];
            printf("aT[%d][%d] :%d\n",j,i,aT[j][i]);
        }
    }
    
    return 0;
}