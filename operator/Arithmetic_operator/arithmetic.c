#include <stdio.h>

int main() {
  int sum, difference, product, quotient, remainder;
  int a, b;
  float div;

  // Input
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  // Arithmetic operations
  sum = a + b;
  difference = a - b;
  product = a * b;
  div = (float)a / b;     // Typecast to get float division
  quotient = a / b;       // Integer division
  remainder = a % b;

  // Output
  printf("\nAddition: %d", sum);
  printf("\nSubtraction: %d", difference);
  printf("\nMultiplication: %d", product);
  printf("\nDivision (float): %.2f", div);
  printf("\nQuotient (int division): %d", quotient);
  printf("\nRemainder (modulus): %d", remainder);

  return 0;
}
