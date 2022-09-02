#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char word[15]="HELLO";
    int i,j;

	for(i=0;i<5;i++){
		for(j=0;j<i+1;j++){
			putchar(word[j]);
			}
			putchar('\n');
	}
	for(i=0;i<5;i++){
		for(j=0;j<4-i;j++){
			putchar(word[j]);
			}
			putchar('\n');
	}
return 0;
	}