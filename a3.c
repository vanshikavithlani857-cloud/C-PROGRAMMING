#include <stdio.h>

int main() {
    int arr[5];
    int i,j,temp;
    for(int i=0;i<5;i++)
    {
    printf("Enter the value:");
    scanf("%d",&arr[i]);
    }

    for (i = 0; i <5; i++) 
    {
        for (j = 0; j <4; j++) 
        {
            
            if (arr[j] > arr[j+1]) 
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order: \n");
    for (i = 0; i <5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}