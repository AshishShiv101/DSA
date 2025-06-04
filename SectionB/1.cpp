#include <stdio.h>

int main()
{
    int a;
    float b;
    double c;
    char d;
    int *p;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of double: %zu bytes\n", sizeof(c));
    printf("Size of char: %zu bytes\n", sizeof(d));
    printf("Size of int pointer: %zu bytes\n", sizeof(p));

    return 0;
}
