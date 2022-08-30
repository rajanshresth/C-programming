// Find all prime numbers in an interval [a, b]
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int checkPrime(int n, int i);
int main(){
    int a, b, i, j;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Prime numbers in the interval [%d, %d] are: \n", a, b);
    for(i = a; i <= b; i++){
        if(checkPrime(i, i-1)){
            printf("%d ", i);
        }
    }
    return 0;
    
}
int checkPrime(int n, int i){
    if(n==1 || i == 1){
        return 1;
    }
    else if(n % i == 0){
        return 0;
    }
    else{
        return checkPrime(n, i-1);
    }
}
