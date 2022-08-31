// Largest Word in a given sentence

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[100],largest[100];
    int c=0,max=0,i,j,index=0,l;
    printf("Enter a sentence: ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++){
        if(str[i] != ' '){
            c=++;
        }else{
            if(c>max){
                max=c;
                index=i=max;
            }
            c=0;
        }
}
if(c>max){
    max=c;
    index=i=max;
}
j=0;
for(i=index-max;i<=index;i++){
    largest[j]=str[i];
    j++;
}
largest[j]='\0';
printf("\nThe largest word is: %s",largest);
getch();
return 0;
}

