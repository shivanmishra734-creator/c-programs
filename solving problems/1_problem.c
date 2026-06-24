/* 1.
Write a C program to calculate area of a rectangle:
a.
Using hard coded inputs.
b.
Using inputs supplied by the user.*/
#include <stdio.h>
int main(){
    float length, breadth;
    printf("enter the length:");
    scanf("%f", &length);
    printf("enter the breadth:");
    scanf("%f", &breadth);
    printf("The area of rectangle is: %f",length * breadth);
    return 0;
}