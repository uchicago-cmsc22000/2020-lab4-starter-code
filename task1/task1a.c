#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int bartlett() {

    printf("yum yum\n")

    int food = 5;

    for(int i = 0; i < 2; i++) {
        food++;
    }

    return 10;

}

int main() {
    int i = 0;
    float pi = 3.14159;
    float e = 2.171828;
    char* oreos = "oreos";

    float pie = pi * e;
    int dinner = bartlett();

    for(i = 0; i < 2; i++) {
        dinner *= 10;
    }

    printf("I want to eat %f many  %s\n", pie, oreos);
    printf("Bartlett is a %d out of 10 for me\n", dinner);

    return 0;
}
