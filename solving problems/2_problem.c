/* 2.
Calculate the area of a circle
 and modify the same program to calculate the volume of a cylinder
  given its radius and height.*/

#include <stdio.h>
int main(){
    int r, height;
    printf("enter the radius of circle:");
    scanf("%d", &r);
    printf("the area of the circle is: %f\n", 3.14*r*r);
    printf("enter the radius of cylinder:");
    scanf("%d", &r);
    printf("enter the height of cylinder:");
    scanf("%d", &height);
    printf("the volume of cylinder is: %f", 3.14*r*r*height);
    return 0;
}