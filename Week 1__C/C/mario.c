#include <stdio.h>
#include "cs50.h"

void print_grid(int size);
int grid_size(void);

int main(void) {
    int n = grid_size();
    print_grid(n);
    
}


int grid_size(void) {
    int n;
    do {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}
void print_grid(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("#");
        }
        printf("\n");
    }
}