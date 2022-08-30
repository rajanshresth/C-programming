// sum_positive(int *) and sum_negative(int *)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a,n;
int sum_positive(int *);
int sum_negative(int *);

int main(){
    int i,n,a[i];
    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements: \n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sum_positive(a);
    sum_negative(a);
    printf("Sum of positive elements is %d \n",sum_positive(a));
    printf("Sum of negative elements is %d \n" ,sum_negative(a));
    return 0;
}

int sum_positive(int *a){
    int i,sum=0;
    for (i=0;i<n;i++){
        if (a[i]>0){
            sum=sum+a[i];
        }
    }
    return sum; 
}
int sum_negative(int *a){
    int i,sum=0;
    for (i=0;i<n;i++){
        if (a[i]<0){
            sum=sum+a[i];
        }
    }
    return sum;
}