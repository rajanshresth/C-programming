// sum of both diagonals of a matrix

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a[30][30],i,j,sum=0,N;
    printf("Enter the size of matrix: ");
    scanf("%d",&N);
    printf("Enter the elements of matrix:\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&a[i][j]);
            if(i==j || (i+j)==(N-1)){
                sum=sum+a[i][j];
            }
        }
    }
    printf("The sum of both diagonals of a matrix is: %d",sum);
    return 0;
}
