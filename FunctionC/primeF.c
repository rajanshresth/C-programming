//Prime numbers between the interval [a,b]
#include <stdio.h>
#include <math.h>

int checkPrime(int n);
int main(){
    int a,b,i;
    printf("Enter the interval [a,b]: ");
    scanf("%d%d", &a, &b);
    for(i=a;i<=b;i++){
        if(checkPrime(i)==1){
            printf("%d ", i);
        }
    }
}

int checkPrime(int n){
    int i,count=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}