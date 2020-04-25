#include <stdlib.h>
#include <stdio.h>

int* multiply(int val1, int val2) {

    int* p = malloc(sizeof(int));
    *p = val1 * val2;

    return p;
}

char five() {

    return 5;

}


int main() {

    int a = 0;
    int b = 50;
    int c = 0;
    float d = 0;
    int i = 0;
    float arr[4] = {0.1, 0.2, 0.3, 0.4};


    int size = sizeof(arr);

    for(i = 0; i < size; i++)
        d += arr[i];
        a++;

    c = b * arr[2];
    
    for(i = 0; i < 5; i++);
        d++;

    int* p = multiply(a, b);
    b -= 5;

    int e = 0;
    int j = *multiply(five(), five());

    if (e = five() || j > 0)
        *p *= e;

    b += j / five();

    printf("The expected values of a, b, c, d, e, and *p are 4, 50, 10, 6.000000, 5 and 1000\n");
    printf("The actual values of a, b, c, d, e, and *p are %d, %d, %d, %f, %d  and %d\n",
            a, b, c, d, e, *p);

    return 0;

}
