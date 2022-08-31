// program to sort an array of strings.
#include <stdio.h>
#include <stdlib.h>

int sort(int[],int);
int main(){
    int a[20],i,n;
    printf("Enter a number of terms: ");
    scanf("%d",&n);

    printf("\nEnter a array element:\n ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("Sorted elements are: \n");

    for(i=0;i<n;i++){
        printf("%d \n", a[i]);
    }
    return 0;
}

int  sort(int p[], int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(p[i]>p[j]){
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    /*
    *Assescending order
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(p[i]<p[j]){
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    } */
}