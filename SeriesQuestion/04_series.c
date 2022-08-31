//cos(x)=1-x^2/2!+x^4/4!-......
#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

int fact(int);
float cosx(float x,int n);

int main(){
    int n;
    float x,c;
    printf("Enter a value of x");
    scanf("%f",&x);
    printf("Enter a number of terms: ");
    scanf("%d",&n);
    
    c = cosx(x,n);
    printf("The value of cos(x) = %f",c);
}

int fact(int n){
    if(n==0&&n==1){
        return 1;
    }else{
        return n*(n-1);
    }
}

float cosx(float x,int n){
    if(x==0){
        return 1;
    } else {
        return (pow(-1,n+1)*pow(x,2*n-2)/fact(2*n-2) + cosx(x,n-1));
    }
}