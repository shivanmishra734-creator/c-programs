#include<stdio.h>
int main() {
    int a = 10; // This is an integer variable
    float b = 14.4; // This is a floating-point variable
    char c = 's'; // This is a character variable
    printf("the value of a is %d\n", a); // This line prints the value of the integer variable 'a'
    printf("the value of b is %f\n", b ); // This line prints the value of the floating-point variable 'b'
    printf("the value of c is %c\n", c); // This line prints the value of the character variable 'c'
    // Type declaration Instructions.
    int x; // This is a declaration of an integer variable 'x'
    float y; // This is a declaration of a floating-point variable 'y'
    char z; // This is a declaration of a character variable 'z'   
    int p = 10; // This is a declaration and initialization of an integer variable 'p'
    float q = 14.4; // This is a declaration and initialization of a floating-point variable 'q'
    char r = 's'; // This is a declaration and initialization of a character variable 'r'  
    int m = 10 ; // This is a declaration and initialization of an integer variable 'm'
    int n = m ; /* This is a declaration and initialization of an integer variable 'n' 
    with the value of 'm'*/
    printf("the value of m is %d and the value of n is %d\n", m, n); /* This line prints
    the values of the integer variables 'm' and 'n'*/
    int i = 10, j = 20, k = 30; /* This is a declaration and initialization of multiple integer
     variables 'i', 'j', and 'k'*/
     printf("the value of i is %d, the value of j is %d and the value of k is %d\n", i, j, k); 
     /* This line prints the values of the integer variables 'i', 'j', and 'k'*/
     int j1 =  a + j - i; /* This is a declaration and initialization of an integer variable 'j1'
     with the value of the expression 'a + j - i'*/
    printf("the value of j1 is %d\n", j1);
    return 0;
}