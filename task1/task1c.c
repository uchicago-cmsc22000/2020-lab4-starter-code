#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void bartlett() {

    char* feeling = "hungry";
    printf("I'm %s\n", feeling);

    return;

}

int main() {
    int i = 0;
    float pi = 3.14159;
    float e = 2.171828;
    char* oreos = "oreos";

    float pie = pi * e;

    for(i = 0; i < 2; i++) {
        e += 10;
    }

    for(i = 0; i < 2; i++) {
        e -= 10;
    }

    printf("I love %s\n", pie);

    return 0;
}
