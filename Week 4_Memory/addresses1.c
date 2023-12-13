// Prints an integer's address

#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%p\n", &n);
    //  %p is used for printing or scanning a pointer's value in hexadecimal notation.
    // & gets the address of n
}
