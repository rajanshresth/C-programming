// Find second largest element from an array containing N elements using concpect of pointers.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a[10],N,i,j,temp,*ptr;
    printf("Enter the number of elements:");
    scanf("%d",&N);
    printf("Enter the elements: \n");
    for (i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(j=i+1;j<N;j++){
        if(a[i]<a[j]){
            temp=*(a+j);
            *(a+j)=*(a+i);
            *(a+i)=temp;
        }
    }
    printf("Second largest element is %d \n",*(a+N-2));
    return 0;
}