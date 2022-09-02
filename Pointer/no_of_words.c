// Program to count the number of words in a string using concpect of pointers.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    char *str,*ptr;
    int i,count=0;
    printf("Enter the string:");
    scanf("%s",str);
    ptr=str;
    while(*ptr!='\0'){
        if(*ptr==' '){
            count++;
        }
        ptr++;
    }
    count++;
    printf("Number of words in the string is %d",count);
    return 0;
}