// 1 + 11 + 111+ 1111 + 11111 + ...

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int generateterm(int n);

int main() {
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += generateterm(i - 1);
    }
    printf("The required sum is %d", sum);
}

int generateterm(int n) {
    if (n == 0) {
        return 1;
    } else
        return (pow(10, n) + generateterm(n - 1));
}
