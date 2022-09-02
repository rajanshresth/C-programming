// Check whether a string is a palindrome.
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkPalindrome(char);
int main(){
    char a[100],x[100],c;
    int i,l,j=0;
    printf("Enter a string: ");
    gets(a);
    c=checkPalindrome(a);
    if (c==1){
        printf("Given string is a palindrome");
    }else{
        printf("Given string is not a palindrome");
    }
}

int checkPalindrome(char a[]){
    int i,l,j=0;
    char x[100];
    l=strlen(a)-1;
    for(i=l;i>=0;i--){
        x[j]=a[i];
        j++;
    }
    if (strcmp(a,x)==0){
        return 1;
    }else{
        return 0;
    }
}