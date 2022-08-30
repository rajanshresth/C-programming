/*
    nested 
    ~~~~~~
    1. nested loop is used to repeat a block of statements until a certain condition is satisfied.
    2. nested loop is used to repeat a block of statements until a certain condition is satisfied.
    syntax:
    while(condition)
    {
        statement;
    }
    syntax:
    do
    {
        statement;
    }while(condition);
    syntax:
    for(initialization; condition; increment/decrement)
    {
        statement;
    }
*/

// Illustration of nested loop
// multiplication table of a number entered by the user using nested loop
#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i=1;i<=10;i++){
        for (j=1;j<=10;j++){
            printf("%d * %d = %d \n", n, i, n*i);
        }
    }
}