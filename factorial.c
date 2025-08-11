#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1; // Use long long for large results

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Factorial of negative number doesn't exist
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i; // fact = fact * i
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
