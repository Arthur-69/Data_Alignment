#include <stdio.h>
#pragma pack(1)

struct PackedStruct {
    char a;
    int b;
    double c;
};

int main() {
    struct PackedStruct ps;

    printf("Size of packed struct: %lu bytes\n", sizeof(ps));
    printf("Address of char a: %p\n", (void*)&ps.a);
    printf("Address of int b: %p\n", (void*)&ps.b);
    printf("Address of double c: %p\n", (void*)&ps.c);

    return 0;
}