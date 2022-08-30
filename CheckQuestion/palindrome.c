// Check palindrome or not.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,i,r,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    i=n;
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==i){
        printf("Entered number is palindrome");
    }
    else{
        printf("Entered number is not palindrome");
    }
    return 0;
}