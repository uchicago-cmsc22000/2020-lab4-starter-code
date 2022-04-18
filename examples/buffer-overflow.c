#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    char *s;

    s = malloc(13 * sizeof(char));

    strcpy(s, "Hello, world!");

    printf("%s\n", s);

    free(s);

    return 0;
}
