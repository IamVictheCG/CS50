#include <stdio.h>
#include "cs50.h"

void draw(int n);
int main(void) {
    int height = get_int("Height: ");
    draw(height);
    // printf("%i", height);
}

void draw(int n) 
{
    for (int i = 0; i < n; i++)
    {
            // printf("@");

        for (int j = 3; j < i + 1; j++)
        {
            printf("%i", j);
        }
        printf("\n");
    }
}