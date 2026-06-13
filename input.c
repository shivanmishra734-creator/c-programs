#include<stdio.h>
int main(){
    int a;
    printf("enter a number:  ");
    scanf("%d", &a);
    float b;
    printf("enter a new decimal number: ");
    scanf("%f", &b);
    char c;
    printf("enter a character: ");
    scanf(" %c", &c);
    printf("the value of a is %d\n", a);
    printf("the value of b is %f\n", b);
     printf("the value of c is %c\n", c);
    return 0;
}