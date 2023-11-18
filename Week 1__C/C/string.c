#include <stdio.h>
#include "cs50.h"

int main(void) {
    string name = get_string("What is your name? "); // Prompt for the user's name and store it as a string
    printf("Hey there, %s\n", name); // Print the user's name using the correct format specifier (%s) for strings
}
