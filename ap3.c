#include<stdio.h>
int main()
{
    int a[3][3];
    int l,s,*ptr;
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            printf("Enter the values:");
            scanf("%d",&a[i][j]);
        }
     }

     l=s=*ptr;
     ptr=&a[0][0];
     for(int i=0 ;i<9;i++)
     {
         if(*(ptr+i)>*ptr)
         {
            l=*(ptr+i);
         }
        if(*(ptr+i)>*ptr)
        {
            s=*(ptr+i);
        }
     }
     printf("The largest number: %d\n",l);
     printf("The smallest number:%d\n",s);

     return 0;
}