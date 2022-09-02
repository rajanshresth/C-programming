// A program to copy the contents of one file source.txt to another file destination.txt.

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *sfp, *dfp;
    char ch;
    sfp = fopen("source.txt","r");
    dfp = fopen("destination.txt","w");
    if(sfp==NULL){
        printf("Error!!!");
        exit(1);
    }

    while((ch=fgetc(sfp))!=EOF){
        fputc(ch,sfp);
    }

    fclose(dfp);
    fclose(sfp);

    printf("Filed copied!");
    dfp=fopen("destination.txt","r");
    printf("Context details of destination file after copy\n");
    while((ch=fgetc(dfp))!=EOF){
        putchar(ch);
    }
    fclose(dfp);
    return 0;
}