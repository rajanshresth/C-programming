/*
    1.In else-if ladder, the control goes through the every else if statement
    until it finds the one that returns true.
    2. else-if ladder is less compact than switch-case ladder.
    3. else-if ladder works on the basis of true or false basis.

    syntax:
    if(condition)
    {
        statement;
    }
    else if(condition)
    {
        statement;
    }
    else if(condition)
    {
        statement;
    }
    else
    {
        statement;
    }
*/
// iinput four numbers and print the largest number
#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a>b && a>b && a>d){
        printf("%d is the largest number", a);
    } else if(b>a && b>c && b>d){
        printf("%d is the largest number", b);
    } else if(c>a && c>b && c>d){
        printf("%d is the largest number", c);
    } else if(d>a && d>b && d>c){
        printf("%d is the largest number", d);
    } else{
        printf("All numbers are equal");
    }
}