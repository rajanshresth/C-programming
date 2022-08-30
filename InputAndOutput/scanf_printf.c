/*
    scanf() and printf()
    *******************
    scanf()
    The scanf() functions is used to input data from the user and store the entire data in the memory address of the variable used.
    Syntax:
    scanf("format", variable_name);
    where format is the format of the data to be inputted.
    ----------------------------
    ----------------------------

    printf()
    The function is used to display the data on the screen.
    Syntax:
    printf("format", variable_name);
    where format is the format of the data to be displayed.
    ----------------------------
*/

// illustration of scanf() and printf()
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The entered number is %d", a);
    return 0;
}