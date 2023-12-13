// Stores and prints an integer via its address

#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i\n", *p);
    // the value of p is the address of n;
    // *p means go to the address stored in p so, the value of *p is 50;
}
