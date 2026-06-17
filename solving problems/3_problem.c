/* 3.
Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit). */
#include <stdio.h>
int main() { 
    float celsius, fahrenheit;
    printf("write the degree of celcius:");
    scanf("%f", &celsius);
    printf("the degree of fahrenheit is: %f",(9.0/5.0)*celsius+32);
    return 0;
}