// Sn= x + x^3/3! + x^5/5! + ... + x^n/n!

#include <stdio.h>
int main(){
    int x,i;
    float s=0;
    printf("Enter a number:");
    scanf("%d",&x);
    
    for(i=1;i<=2x-1;i++){
        s=s+pow(x,i)/factorial(i);
    }
    printf("Sum of series=%f",s);
}