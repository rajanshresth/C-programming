/*
    1+1/2^2+...+1/n^2
*/

int main(){
    int n,i;
    float s=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        s=s+1.00/pow(i,2);
    }
    printf("Sum of series=%f",s);
}