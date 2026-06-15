/* 1.
Write a C program to calculate area of a rectangle:
a.
Using hard coded inputs.
b.
Using inputs supplied by the user.*/
#include <stdio.h>
int main(){
    int length, breadth;
    printf("enter the length:");
    scanf("%d", &length);
    printf("enter the breadth:");
    scanf("%d", &breadth);
    printf("The area of rectangle is: %d",length * breadth);
    return 0;
}