//Check palindrome or not in a given interval and display the count of palindrome numbers.
#include <stdio.h>
#include <stdlib.h>
int checkPalindrome(int n);
int main(){
    int a,b,i,count=0;
    printf("Enter the range: ");
    scanf("%d%d",&a,&b);
    printf("\nPalindrome numbers between %d and %d are: \n",a,b);
    for(i=a;i<=b;i++)
    {
        if(checkPalindrome(i)==1)
        {
            printf("%d\n",i);
            count++;
        }
    }
    printf("\nTotal palindrome numbers: %d",count);
    return 0;
}

int checkPalindrome(int n){
    int temp,sum=0,rem,i;
    temp=n;
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(temp==sum){
        return 1;
    }
    else{
        return 0;
    }
}