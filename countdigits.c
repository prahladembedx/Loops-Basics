#include <stdio.h>

int countDigits(long long n) {
    // Handle 0 as a special case
    if (n == 0) return 1;

    // Handle negative numbers
    if (n < 0) n = -n;

    int count = 0;
    while (n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int main() {
    long long n;

    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    int digits = countDigits(n);

    printf("Number        : %lld\n", n);
    printf("Digit count   : %d\n", digits);

    return 0;
}
