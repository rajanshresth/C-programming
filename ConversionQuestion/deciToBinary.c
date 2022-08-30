// Convert decimal to binary
#include <stdio.h>
#include <math.h>

int main(){
    int deci,i,j,b[100];
    printf("Enter a decimal number: ");
    scanf("%d", &deci);
        while(deci > 0){
            b[i] = deci % 2;
            deci = deci / 2;
            i++;
        }
    for (j = i - 1; j >= 0; j--)
        printf("%d", b[j]);
}