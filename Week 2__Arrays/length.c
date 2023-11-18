#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main(void) {
    string name = get_string("What is your name? ");

    //Get the length of a string
    // int n = 0;
    // while (name[n] != '\0') {
    //     n++;
    // }
    // printf("%i",n);
    
    //Get the length of a string with library

    int n = strlen(name);
    printf("%i",n); 
}
