#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Project cs61c_discussion1 ready.\n");

    printf("On this PC:\nA bool is: %lu\nchar is: %lu\nint is: %lu\n", sizeof(bool), sizeof(char), sizeof(int));
    printf("On this PC:\nA long is: %lu\nlong long is: %lu\nfloat is: %lu\n", sizeof(long), sizeof(long long), sizeof(float));

    int a = 0b10110011;
    printf("2.1a - %b is %d in decimal and %X in Hex!\n", a, a, a);

    int b = 437;
    printf("2.1b - %d is %b in binary and %X in Hex!\n", b, b, b);

    int c = 0x0123;
    printf("2.1c - %X is %d in decimal and %b in binary!\n", c, c, c);

    int d, e;
    d = 0b011001;
    e = 0b000111;
    printf("%b - %b = %b or %d\n", d, e, d-e, d-e);
    d = 0x3b;
    e = 0x06;
    printf("%X + %X = %5b" , d, e, d+e);

    return 0;
}
