#include<stdio.h>
int main()
{
    int rupees[]={500,200,100,50,20,10,5,2,1};
    int notes[9]={0},amt=0;
    printf("Enter the amount:");
    scanf("%d",&amt);
    for(int i=0;i<9;i++)
    {
        if(amt>=rupees[i])
        {
            notes[i]=amt/rupees[i];
            amt=amt%rupees[i];
        }
    }
    for(int i=0;i<9;i++)
    {
        if(notes[i]!=0)
        printf("%d notes of %d Rs\n",notes[i],rupees[i]);
    }
    return 0;

}