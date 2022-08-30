// Add, subtract, multiply and divide using user defined functions
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int main(){
    int a, b,add,sub,mult,div;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    add = addition(a, b);
    sub = subtraction(a, b);
    mult = multiplication(a, b);
    div = division(a, b);
    printf("\nAddition: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %d\n", add, sub, mult, div);
    return 0;
}

int addition(int a, int b){
    return a + b;
}
int subtraction(int a, int b){
    return a - b;
}
int multiplication(int a, int b){
    return a * b;
}
int division(int a, int b){
    return a/b;
}
