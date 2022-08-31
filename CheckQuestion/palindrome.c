// Check palindrome or not.

//palindromic number (also known as a numeral palindrome or a numeric palindrome) is a number (such as 16461) that remains the same when its digits are reversed
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
