/*
    getchar() and putchar()
    ----------------------------
    getchar()
    This function is used to read a character from the keyboard.
    This function returns a value which has to be assigned to a variable.
    Syntax:
    character = getchar();
    where character is the variable to which the value is to be assigned.
    Example:
    char ch;
    ch = getchar();
    ----------------------------
    ----------------------------

    putchar()
    This function is used to display the value of a character or character constant onto the screen.
    Syntax:
    putchar(character_variable);
    where character_variable is the variable from which the value is to be displayed.
    Example:
    char ch = 'A';
    putchar(ch);
    ----------------------------
*/

// illustration of getchar() and putchar()
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();

    printf("The entered character is \n");
    putchar(ch);
    return 0;
}
