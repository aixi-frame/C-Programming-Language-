#include <stdio.h>

int main() {
    int a = 10;        // Simple assignment
    int b = 5;

    printf("Initial values: a = %d, b = %d\n", a, b);

    a += b;            // a = a + b
    printf("After a += b: a = %d\n", a);

    a -= b;            // a = a - b
    printf("After a -= b: a = %d\n", a);

    a *= b;            // a = a * b
    printf("After a *= b: a = %d\n", a);

    a /= b;            // a = a / b
    printf("After a /= b: a = %d\n", a);

    a %= b;            // a = a % b
    printf("After a %%= b: a = %d\n", a);

    // Reset and show bitwise compounds
    a = 10;
    printf("\nReset a to %d for bitwise operations\n", a);

    a &= b;            // a = a & b
    printf("After a &= b: a = %d\n", a);

    a |= b;            // a = a | b
    printf("After a |= b: a = %d\n", a);

    a ^= b;            // a = a ^ b
    printf("After a ^= b: a = %d\n", a);

    a <<= 1;           // a = a << 1
    printf("After a <<= 1: a = %d\n", a);

    a >>= 2;           // a = a >> 2
    printf("After a >>= 2: a = %d\n", a);

    // Demonstrate chained assignment
    int x, y, z;
    x = y = z = 100;
    printf("\nAfter chained assignment: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
