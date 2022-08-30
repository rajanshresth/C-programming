// check wherether a given inter is a triangular number
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