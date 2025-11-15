#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    FILE *fp;
    char filename[100],ch;
    int lines=0,words=0,chars=0,spaces=0;
    int inword=0;
    printf("Enter filename:");
    scanf("%s",filename);

    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("Error");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF)
    {
        chars++;
        if(ch=='\n')
        spaces++;
        if(ch=='\n')
        lines++;
        if(isspace(ch))
        inword=0;
        else if(inword==0)
        {
            inword=1;
            words++;
        }
    }
    fclose(fp);
    printf("\n File statistics \n");
    printf("Characters:%d \n",chars);
    printf("Words:%d \n",words);
    printf("Lines:%d \n",lines);
    printf("Spaces:%d \n",spaces);

    return 0;
}

