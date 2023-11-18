#include <stdio.h>
#include "cs50.h"
#include <string.h>
#include <ctype.h>

int main(void) {
    string name = get_string("Before: ");
    int name_length = strlen(name);
    printf("After: ");

    // for(int i = 0 ; i < strlen(name); i++) {
    //     if (name[i] >= 'a' && name[i] <= 'z')
    //     {
    //         printf("%c", name[i] - 32);
    //     }
    //     else {
    //         printf("%c", name[i]);
    //     }
    // }


    for(int i = 0 ; i < name_length; i++) {
        if (islower(name[i]))
        {
            printf("%c", toupper(name[i]));
        }
        else {
            printf("%c", name[i]);
        }
    }
 
}
