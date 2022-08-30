/*
    while
    1. while loop is used to iterate a loop a number of times.
    2. while loop is used to repeat a block of statements until a certain condition is satisfied.
    syntax:
    while(condition)
    {
        statement;
    }

*/

// Illustration of while loop
// multiplication table of a number entered by the user using while loop
#include <stdio.h>
int main(){
    int n,i=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i<=10){
        printf("%d * %d = %d \n", n, i, n*i);
        i++;
    }
}