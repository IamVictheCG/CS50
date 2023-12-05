#include <stdio.h>
#include "cs50.h"
#include <string.h>
int main(void)
{
    string names[] = {"Victor", "David", "lucy", "el", "vic"};
    string numbers[] = {"+234-80836", "+234-08011", "+234-08221", "+234-08331", "+234-08441"};
    int names_size = sizeof(names);
    int name_size_index = sizeof(names[4]);
    int names_length = names_size / name_size_index;
    // int numbers_length = sizeof(numbers)/sizeof(numbers[4]); // correct
    int numbers_length = *(&numbers + 1) - numbers; // correct
    printf("%i\n", names_length);
    printf("The length of numbers is %i\n", numbers_length);

    string name = get_string("Name: ");
    // printf("%s", name);

    for (int i = 0; i < names_length; i++)
    {
        // compare strings using strcmp
        if (strcmp(name, names[i]) == 0)
        {
            // if names match return the corresponding number
            printf("%s\n", numbers[i]);
        }
    }
}
