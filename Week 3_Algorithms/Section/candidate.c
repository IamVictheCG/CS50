#include <stdio.h>
#include "cs50.h"

typedef struct
{
    string name;
    int votes;
}
candidate;

// candidate get_candidate(string prompt);
// int main(void) {
//     candidate president = get_candidate("Enter your Candidate");

//     printf("Name: %s\n", president.name);
//     printf("Votes: %i\n", president.votes);
// }

// candidate get_candidate(string prompt) {
//     printf("%s\n", prompt);

//     candidate v;
//     v.name = get_string("Enter your name: ");
//     v.votes = get_int("Enter number of votes: ");
//     return v;
// }

candidate get_candidate(string prompt);
int main(void) {
    int candidatess = 2;
    candidate candidate_array[candidatess];
    for (int i = 0; i < candidatess; i++)
    {
        candidate_array[i] = get_candidate("Enter your Candidate");
        
        printf("Name: %s\n", candidate_array[i].name);
        printf("Votes: %i\n", candidate_array[i].votes);
        
    }

    for (int i = 0; i < candidatess; i++)
    {
        printf("\nDetails of Candidate %d:\n", i + 1);
        printf("Name: %s\n", candidate_array[i].name);
        printf("Votes: %i\n", candidate_array[i].votes);
    }
    // printf(int candidate_array[2]);
    //I want to print out the entire cnadidate_array array.

}

candidate get_candidate(string prompt) {
    printf("%s\n", prompt);

    candidate person;
    person.name = get_string("Enter your name: ");
    person.votes = get_int("Enter number of votes: ");
    return person;
}