// Prints a string's chars via pointer arithmetic

#include <stdio.h>

int main(void)
{
    // Note: A string is just an array of characters
    char *s = "HI!";
    // go to the address of s using *s
    printf("%c\n", *s);
    // go to the address of the first character in s using *(s + 1)
    printf("%c\n", *(s + 1);
    printf("%c\n", *(s + 2));
}
