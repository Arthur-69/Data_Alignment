#include <stdio.h>

struct MyStruct {
    char a;
    int b;
    double c;
};

int main() {
    struct MyStruct s;

    printf("Size of struct: %lu bytes\n", sizeof(s));

    printf("Address of char a: %p\n", (void*)&s.a);
    printf("Address of int b: %p\n", (void*)&s.b);
    printf("Address of double c: %p\n", (void*)&s.c);

    return 0;
}