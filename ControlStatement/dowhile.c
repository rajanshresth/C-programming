/*
    do-while
    1. do-while loop is used to iterate a loop a number of times.
    2. do-while loop is used to repeat a block of statements until a certain condition is satisfied.
    syntax:
    do
    {
        statement;
    }while(condition);

*/
// Illustration of do-while loop

// multiplication table of a number entered by the user using do-while loop
#include <stdio.h>
int main(){
    int n,i=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    do{
        printf("%d * %d = %d \n", n, i, n*i);
        i++;
    }while(i<=10);
}