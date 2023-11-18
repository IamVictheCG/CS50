#include <stdio.h>
#include "cs50.h"

int factorial(int number);
int main(void) {
    // prompt the user to type a number
    int n = get_int("Type a number: ");
    printf("%i", factorial(n));
    
    

}

int factorial(int number) {
    
    // int f;
    //____________------Method 1-------_____________

    // for (int i = n; i >= 1; i--)
    // {
    //     f *= i;
    //     // printf("%i", i);
    // }
    //     printf("%i", f);

    //___________-------Method 2-------______________

    // for (int i = 1; i < n; i++)
    // {
    //     f = n * f(n-1);
    //     printf("%i", i);
    // }
    // printf("%i", f);

    if (number == 1)
    {
        return 1;
    }
    return number * factorial(number - 1); 
}