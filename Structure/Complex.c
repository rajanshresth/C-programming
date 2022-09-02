//Functions to perform addition, subtraction, multiplication, division operations on complex numbers using structures.

#include <stdio.h>
#include <math.h>
/* 
float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);
 */
struct complex{
    float real;
    float imag;
};
struct complex add(struct complex,struct complex);
struct complex sub(struct complex,struct complex);
struct complex mul(struct complex,struct complex);
struct complex div(struct complex,struct complex);

int main(){
    struct complex a,b,c1,c2,c3,c4;
    printf("Enter the real and imaginary parts of complex number 1: ");
    scanf("%f%f", &a.real, &a.imag);
    printf("Enter the real and imaginary parts of complex number 2: ");
    scanf("%f%f", &b.real, &b.imag);
    c1=add(a,b);
    c2=sub(a,b);
    c3=mul(a,b);
    c4=div(a,b);
    printf("Addition: %f",c1);
    printf("Subtraction: %f",c2);
    printf("Multiplication: %f",c3);
    printf("Division: %f",c4);
    return 0;
}

struct complex add(struct complex a,struct complex b){
    struct complex c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return c;
}
struct complex sub(struct complex a,struct complex b){
    struct complex c;
    c.real=a.real-b.real;
    c.imag=a.imag-b.imag;
    return c;
}
struct complex mul(struct complex a,struct complex b){
    struct complex c;
    c.real=a.real*b.real-a.imag*b.imag;
    c.imag=a.real*b.imag+a.imag*b.real;
    return c;
}
struct complex div(struct complex a,struct complex b){
    struct complex c;
    c.real=a.real/b.real-a.imag/b.imag;
    c.imag=a.real/b.imag+a.imag/b.real;
    return c;
}