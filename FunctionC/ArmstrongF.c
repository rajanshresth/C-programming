// Armstrong numbers between the range entered by a user and also display their counts using function.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int  checkArmstrong(int n);
int main()
{
    int a,b,i,count=0;
    printf("Enter the range: ");
    scanf("%d%d",&a,&b);
    printf("\nArmstrong numbers between %d and %d are: \n",a,b);
    for(i=a;i<=b;i++)
    {
        if(checkArmstrong(i)==1)
        {
            printf("%d\n",i);
            count++;
        }
    }
    printf("\nTotal Armstrong numbers: %d",count);
    return 0;
}

int checkArmstrong(int n)
{
    int temp,sum=0,rem,i;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(temp==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}