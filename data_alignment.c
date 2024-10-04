#include <stdio.h>

int main() {
    int i;
    char c;
    double d;
    short s;

    printf("Size of int: %lu bytes\n", sizeof(i));
    printf("Size of char: %lu bytes\n", sizeof(c));
    printf("Size of double: %lu bytes\n", sizeof(d));
    printf("Size of short: %lu bytes\n", sizeof(s));

    printf("Address of int: %p\n", (void*)&i);
    printf("Address of char: %p\n", (void*)&c);
    printf("Address of double: %p\n", (void*)&d);
    printf("Address of short: %p\n", (void*)&s);

    return 0;
}