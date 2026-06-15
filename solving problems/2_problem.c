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
    //printf("the area of the circle is: %f", 3.14*r*r);
    printf("the volume of cylinder is: %f", 3.14*r*r*height);
    return 0;
}