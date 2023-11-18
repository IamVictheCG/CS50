#include <stdio.h>
#include "cs50.h"

int negative_int();
// int positive_int();

int main(void) {
   int i = negative_int();
    printf("i is %i", i);
    
}


// int positive_int() {
//     int n = get_int("positive: ");
//     return n;
// }

int negative_int() {
    // accept only negative numbers
    int n;
    do
    { 
       n = get_int("negative: ");
    } 
    while (n > 0);
    return n;   
}