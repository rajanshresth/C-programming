/*
    long
    It is a type specifier which is used along with other keywords such as int, char, float, double, etc.
    It is used to declare a variable of type long.
    Syntax:
    long variable_name;
    where variable_name is the name of the variable.
    Example:
    long a;
    a = 10;
    ----------------------------
*/

//Illustration of long
#include <stdio.h>
int main()
{
    long a;
    a = 10;
    printf("%ld", a);
    return 0;
}