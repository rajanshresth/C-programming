// number is prime or not
#include <stdio.h>

int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d", &n);

    int isPrime = 1;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime){
        printf("%d is a prime number", n);
    }
    else{
        printf("%d is not a prime number", n);
    }
}