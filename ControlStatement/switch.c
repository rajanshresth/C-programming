/*
    switch
    1. In case of switch, the control goes through the every case statement
    until it finds the one that returns true.
    2. switch-case ladder is more compact than else-if ladder.
    3. switch-case ladder works on the basis of equality operator.
    synatax:
    switch(expression)
    {
        case value:
            statement;
            break;
        case value:
            statement;
            break;
        case value:
            statement;
            break;
        default:
            statement;
            break;
    }
*/

// input a number and print the day of the week using switch-case ladder
#include <stdio.h>
int main(){
    int week;
    printf("Enter a week number(1-7): ");
    scanf("%d", &week);
    switch(week){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid");
            break;
    }
    return 0;
}