// Convert binary to decimal
#include <stdio.h>
#include <math.h>

int main() {
    int binary, i, j, deci = 0, rem;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary > 0) {
        rem = binary % 10;
        deci = deci + rem * pow(2, i);
        binary = binary / 10;
        i++;
    }
    printf("Decimal equivalent=%d", deci);
}
// Output:
// Enter a binary number: 101
// Decimal equivalent=5