#include <stdio.h>
#include <cs50.h>

int main(void) {
    int a = 28;
    int b = 50;
    int *c = &a;

    *c = 14;
    c = &b;
    *c = 25;

    printf("a has a value of %i, located at %p\n", a, &a);
    printf("b has a value of %i, located at %p\n", b, &b);
    printf("c has a value of %p, located at %p\n", c, &c);
}