#include <stdio.h>
int main() {
    int a = 10;
    int b = 5;
    int sum = a + b; // Addition
    int difference = a - b; // Subtraction
    int product = a * b; // Multiplication
    float quotient = (float)a / b; // Division
    int remainder = a % b; // (%) is the sign to calculate remainder,also known as modulus operator

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient); // %.2f formats the float to 2 decimal places
    printf("Remainder: %d\n", remainder);

    return 0;
}