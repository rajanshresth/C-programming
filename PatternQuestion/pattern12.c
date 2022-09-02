/*
H
HE
HEL
HELL
HELLO
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            if(i==1&&j==1)
                printf("%c",j+71);
            else if(i=2&&j==2)
                printf("HE");
            else if(i=3&&j==3)
                printf("HEL");
            else if(i=4&&j==4)
                printf("HELL");
            else if(i=5&&j==5)
                printf("HELLO");
            else
                printf(" ");
                
        }
        printf("\n");
    }
}