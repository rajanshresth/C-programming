// Read integers from a file and print them in odd-even order
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp,*fo;
    int n;
    char str[100];
    fp = fopen("even.txt","w");
    fo = fopen("odd.txt","w");
    do{
        printf("Enter the numbers: ");
        scanf("%d",&n);
        if(n == -1)
            break;
        if(n%2 == 0)
            fprintf(fp,"%d ",n);
        else
            fprintf(fo,"%d ",n);
    }

    printf("Any more numbers? (y/n): \n");
    scanf("%s",str);

    while(strcmp(str,"y") == 0);
    fclose(fp);
    fclose(fo);
    return 0;
}
