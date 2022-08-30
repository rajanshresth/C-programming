/*
    getche()
    getche() is a function that reads a character from the keyboard and returns it.
    This function is similar to getchar() except that it doesn't print the character on the screen.
    Syntax:
    character = getche();
    where character is the variable to which the value is to be assigned.
    Example:
    char ch;
    ch = getche();
    ----------------------------    
*/

// illustration of getche()
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getche();
    printf("The entered character is \n");
    putchar(ch);
    return 0;
}