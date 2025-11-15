#include <stdio.h>

int main() {
    int arr[4][4]={{1,2,3,4},{3,4,5,7},{7,8,9,6},{4,5,7,9}};
    int a[100];
    int i,j,temp,k=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
           a[k]=arr[i][j];
           k++;
        }
    }

    for (i = 0; i <16; i++) 
    {
        for(j = 0; j <15; j++) 
        {
            
            if (a[j] > a[j+1]) 
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Sorted array \n");
    for (i = 0; i <16; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}