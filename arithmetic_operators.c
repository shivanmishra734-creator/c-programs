#include <stdio.h>
int main()
{
    int a = 10;
    int b = 5;
    int sum = a + b;               // Addition
    int difference = a - b;        // Subtraction
    int product = a * b;           // Multiplication
    float quotient = (float)a / b; // Division
    int remainder = a % b;         // (%) is the sign to calculate remainder,also known as modulus operator
    /* % is the modular division operator
o
% → returns the remainder
o
% → cannot be applied on float
o
% → sign is same as of numerator (-5%2=-1) */

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient); // %.2f formats the float to 2 decimal places
    printf("Remainder: %d\n", remainder);
    /*int b = 2, c = 3;
    int z; z = b*c; //legal
    int z; b*c = z; //illegal (not allowed)*/
    return 0;
}