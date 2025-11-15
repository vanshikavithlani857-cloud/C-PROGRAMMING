#include <stdio.h>
int main() 
{
    int arr[10],count=0;
    int freq[10],t[10]={0};
    printf("Enter 10 integers:\n");
    for (int i = 0; i <10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (t[i] == 1) {
            continue; 
        }
        int count = 1;
        for (int j = i + 1; j <10; j++) {
            if (arr[i] == arr[j]) {
                count++;
                t[j] = 1; 
            }
        }
        freq[i] = count;
    }
    printf("Frequency of each unique element:\n");
    for (int i = 0; i <10; i++) {
        if (t[i] ==0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}






