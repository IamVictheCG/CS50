#include <stdio.h>
#include "cs50.h"

int main(int argc, string argv[]) {
    // printf("Argument count: %d\n", argc);
    string name = get_string("What is your name? ");

    if (argc == 2)
    {
        printf("Hey, %s\n", argv[1]);
    }
    else{
        printf("hello, %s, the argc is %i", name, argc);
    }
    

}
