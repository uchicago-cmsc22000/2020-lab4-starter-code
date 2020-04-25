#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int* pointer() {

    int* ret = malloc(sizeof(int));
    *ret = 0;
    int i;

    for(i = 0; i < 5; i++) {
        *ret += 7;
    }

    return ret;

}

int num() {
    int num = 0;

    for (int i = 0; i < 10; i++) {
        num++;
    }

    return num;
}

int main() {

    int* p = pointer();
    int a = 5;
    int c = 12;
    *p += 5;
    c = 8;

    a += 20;
    *p += 3;
    a *= 2;
    a = a - c;
    *p -= 1;

    c--;

    int b = c - 1;
    c = b * 7;


    b *= 8;
    b -= 7;

    c = b * 2 - c;
    b++;
    c += num();
    c -= 8;

    return 0;
}
