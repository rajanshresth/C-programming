// Add 2*2 matrix using pointers
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a[2][2],b[2][2],c[2][2];
    int i,j;
    printf("Enter the elements of first matrix: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d \t",(a[i]+j));
        }
    }
    printf("Enter the elements of second matrix: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d \t",(b[i]+j));
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            *(c[i]+j)=*(a[i]+j)+*(b[i]+j);
            printf("%d \t",*(c[i]+j));
        }
    }
}