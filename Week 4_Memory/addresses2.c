#include <stdio.h>
// #include

int main(void) { 
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
    // *p points to the address of n
}
