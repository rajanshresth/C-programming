// Convert date in BS format to AD format using structures.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct dateBS{
    int day;
    int month;
    int year;
};

struct dateAD{
    int day;
    int month;
    int year;
};

int main(){
    struct dateBS bs;
    struct dateAD ad;
    printf("Enter the day, month and year in BS format: ");
    scanf("%d%d%d", &bs.day, &bs.month, &bs.year);
    ad.day=bs.day-16;
    ad.month=bs.month-8;
    ad.year=bs.year-56;
    printf("The date in AD format is: %d/%d/%d", ad.day, ad.month, ad.year);
    return 0;
}