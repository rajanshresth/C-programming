// Check a number entered by the user is Armstrong number or not.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n,a,r=0,s=0;
  printf("Enter a number:");
  scanf("%d",&n);
  a=n;
  while(n>0){
    r=n%10;
    s=s+pow(r,3);
    n=n/10;
  }

  if(s==a){
    printf("Entered number is armstrong");
  }
  else{
    printf("Entered number is not armstrong");
  }
  return 0;
}