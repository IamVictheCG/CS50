#include <stdio.h>
#include "cs50.h"
#include <string.h>
    typedef struct {
    string names;
    string numbers;
   }
   person;

int main(void) {

    person people[5];
    people[0].names = "Victor";
    people[1].names = "David";
    people[2].names = "lucy";
    people[3].names = "el";
    people[4].names = "vic";
    
    people[0].numbers = "+234-80836";
    people[1].numbers = "+234-08011";
    people[2].numbers = "+234-08221";
    people[3].numbers = "+234-08331";
    people[4].numbers = "+234-08441";
    
    int people_size = *(&people + 1) - people;
    printf("%i", people_size);

    string name = get_string("Name: ");

    for (int i = 0; i < people_size; i++)
    {
        // compare strings using strcmp
        if (strcmp(name, people[i].names) == 0) {
            // if names match return the corresponding number
            printf("%s\n", people[i].numbers);
        }
    }
    
}
