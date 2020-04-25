#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* foo(int n) {

    char* p = NULL;

    if (n < 0) {
        strcpy(p, "fee");

    } else if (n == 0) {
        strcpy(p, "foo");

    } else {
        strcpy(p, "faa");

    }

    return p;

}

int bar(int* p) {

    int n = *p;
    int i;


    for(i = 0; i < 5; i++) {
        n++;
    }

    return n;
}

void printer(char* s, char* t) {

    printf("I'm printing %s and %s \n", s, t);

    return;
}

void copier(char* s, char* t) {
    int i;

    for(int i = 0; i < strlen(s) + 1; i++) {
        t[i] = s[i];
    }

    printer(s, t);

    return;
}

int main() {

    char *p, *s, *t;
    int *q, *r;
    int a = 1;
    int i;

    p = foo(a);
    q = malloc(sizeof(int));
    t = "str";


    r = 0;
    *q = 3;
    int n =  bar(q);


    s = malloc(strlen(p) + 1);

    for(i = 0; i < 5; i++) {
        *r = i * n;
    }

    copier(p, s);
    copier(p, t);
   

    free(p);
    free(q);
    free(r);
    free(s);
    free(t);

    return 0;

}
