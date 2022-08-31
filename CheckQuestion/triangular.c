// check wherether a given inter is a triangular number
//The triangular number sequence is the representation of the numbers in the form of equilateral triangle arranged in a series or sequence. 
// These numbers are in a sequence of 1, 3, 6, 10, 15, 21, 28, 36, 45, and so on.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int i = 1;
    int triangular = 0;
    while(triangular < n){
        triangular = i * (i + 1) / 2;
        i++;
    }
    if(triangular == n){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}