#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char copy[100],ch;
    int i=0,chcount,count1=0,count2=0;
    FILE *f = fopen("text.c","r");
    while((ch=getc(f))!=EOF)
    {
        copy[i]=ch;
        i++;
    }
    chcount=i;
    i=0;
    while(i<chcount)
    {
        if(copy[i]=="<"&&copy[i+1]=="<")
        count1++;

        else if(copy[i]==">"&&copy[i+1]==">")
        count2++;

        else
        i++;

    }
    printf("number of << are=%d",count1);
    printf("number of >> are=%d",count2);

}