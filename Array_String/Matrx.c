// Multipication of two matrices

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a[10][10],b[10][10],c[10][10];
    int arow,acol,brow,bcol,i,j,k,sum;

    printf("Enter the number of rows and columns of matrix 1:");
    scanf("%d %d",&arow,&acol);
    printf("Enter the number of rows and columns of matrix 2:");
    scanf("%d %d",&brow,&bcol);
    if(acol!=brow){
        printf("Multiplication not possible");
        exit(0);
    }
    printf("Enter the elements of matrix 1:");
    for(i=0;i<arow;i++){
        for(j=0;j<acol;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix 2:");
    for(i=0;i<brow;i++){
        for(j=0;j<bcol;j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("Result of multiplication of matrix 1 and matrix 2 is: \n");
    for(i=0;i<arow;i++){
        for(j=0;j<bcol;j++){
            for(k=0;k<acol;k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }}

    for(i=0;i<arow;i++){
        for(j=0;j<bcol;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}