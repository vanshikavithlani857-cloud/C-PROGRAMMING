#include <stdio.h>
#include<string.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Enter lines of text (type END to stop):\n");

    while (1) {
        fgets(line,200,stdin);   
        if (strcmp(line, "END") == 0)   

            break;

        fputs(line, fp);    
        fputs("\n", fp); 
    }

    fclose(fp);

    printf("Data written to output.txt\n");

    return 0;
}