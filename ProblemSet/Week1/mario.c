#include <cs50.h>
#include <stdio.h>

int grid_size(void);
void print_grid(int size);

int main(void)
{
    int n = grid_size();
    print_grid(n);
    return 0;
}

int grid_size(void) {
    int n;
    do {
        n = get_int("Size: ");
    }
    while (n < 1 || n > 8);
    return n;
}

// void print_grid(int size) {
//     for(int i = 0; i <= size; i++) {
//         for(int j = 0; j < i; j++) {
//             printf("#");
//         }
//         printf("\n");
//     }
// }

void print_grid(int size) {
    for(int i = 0; i < size; i++) {

        for(int j = 0; j < size - i; j++) {
            printf(".");
        }

        for (int k = 0; k <= i; k++) {
            printf("#");
        }

        printf("\n");
    }
}
