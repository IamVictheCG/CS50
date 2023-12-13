// Prints substrings via pointer arithmetic

#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%s\n", s);
    // char *s starts printing from the address of the first character of the string
    printf("%s\n", s + 1);
    printf("%s\n", s + 2);
}