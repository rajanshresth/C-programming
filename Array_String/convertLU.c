/* Write a program to replace lowercase letters with
uppercase & vice versa in a string. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s1[30];
    printf("Enter a string: ");
    fgets(s1,10,stdin);
    if(s1[0]>='a' && s1[0]<='z'){
        s1[0]=s1[0]-32;
        // strupr(s1);
    }else{
        s1[0]=s1[0]+32;
        // strlwr(s1);
    }
    puts(s1);
}