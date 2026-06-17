/*4.
Write a program to calculate simple interest for a set of values representing principal, 
number of years and rate of interest.*/
#include <stdio.h>
int main() {
float principal, time, rate;
printf("Enter the principal amount:");
scanf("%f", &principal);
printf("Enter time duration:");
scanf("%f", &time);
printf("Enter the rate of interest:");
scanf("%f", &rate);
printf("Simple interset: %f", (principal*time*rate)/100 );
return 0;
}