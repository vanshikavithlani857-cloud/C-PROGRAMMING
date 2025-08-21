#include <stdio.h>
int main() 
{
    float bytes,kb,mb,gb;
    printf("Enter the size in bytes:");
    scanf("%f",&bytes);

    kb=bytes/1024;
    mb=kb/1024;
    gb=mb/1024;

    printf("%f bytes=%f kb \n",bytes,kb);
    printf("%f bytes=%f mb \n",bytes,mb);
    printf("%f bytes=%f gb",bytes,gb);
    return 0;

}
