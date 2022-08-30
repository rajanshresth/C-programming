// Check leap year or not.

#include <stdio.h>
#include <math.h>
int main(){
    int year,i;
    printf("Enter a year:");
    scanf("%d",&year);

    if(year%4==0 && year%100 !=0 || year%400==0){
        printf("%d is a leap year",year);
    } else {
        printf("%d is a leap year",year);
    }
}
