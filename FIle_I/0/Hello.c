#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("NewTest.txt", "r");
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return 0;
    } else {
        fclose(fptr);
    }
}