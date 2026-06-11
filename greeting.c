#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello %s, you are %d years old!\n", name, age);

    if (age < 18) {
        printf("You are a minor.\n");
    } else if (age == 18) {
        printf("You just turned 18!\n");
    } else {
        printf("You are an adult.\n");
    }

    return 0;
}