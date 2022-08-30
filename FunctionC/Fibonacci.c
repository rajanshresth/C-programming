// Fibonacci series using recursion
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibonacci(int n);
int main(){
    int n,tn;
    printf("Enter a number: ");
    scanf("%d", &n);
    tn=fibonacci(n);
    printf("%dth fibonacci number is: %d\n", n, tn);
    return 0;
}

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}