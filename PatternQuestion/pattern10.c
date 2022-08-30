#include <stdio.h>

int main(){
    int i,j,k;
    for(i=7;j<7;i++){
        for(j=7;j>=i;j--){
            printf("  ");
        }
        for(j=0;j<=i;j++){
            if(i==0 || j==0){
                k=1;
            } else {
                k=k*(i-j+1)/j;
            }
            printf('%3d',k);
            printf("  ");
            if(i/2==j) break;
        }
        printf("\n");
    }
}