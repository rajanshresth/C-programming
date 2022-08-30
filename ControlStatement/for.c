/*
    for loop
    1. for loop is used to iterate a loop a number of times.
    2. for loop is used to repeat a block of statements until a certain condition is satisfied.

    syntax:
    for(initialization; condition; increment/decrement)
    {
        statement;
    }

*/

// Illustration of for loop
// multiplication table of a number entered by the user using for loop
#include <stdio.h>
int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i=1;i<=10;i++){
        printf("%d * %d = %d \n", n, i, n*i);
    }
}
