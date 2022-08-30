/*
    gets() and puts()
    *******************
    gets()
    This function is used to take entire string as input from the user and to assign the value to string variable.
    Syntax:
    gets(string_variable);
    where string_variable is the variable to which the value is to be assigned.
    Example:
    char str[20];
    gets(str);
    ----------------------------
    ----------------------------
    puts()
    This function is used to display the value of a string onto the screen.
    Syntax:
    puts(string_variable);
    where string_variable is the variable from which the value is to be displayed.
    Example:
    char str[20] = "Hello World";
    puts(str);
    ----------------------------
*/

// illustration of gets() and puts()
#include <stdio.h>
int main()
{
    char str[20];
    printf("Enter a string: ");
    gets(str);
    printf("The entered string is \n");
    puts(str);
    return 0;
}