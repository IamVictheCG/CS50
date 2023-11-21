#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main(int argc, string argv[]) {
    // int numbers[] = {20, 40, 60, 80, 100, 120, 140, 160, 180, 200};
    // int n = get_int("Enter the desired number: ");

    // for (int i = 0; i < 10; i++)
    // {
    //     if (numbers[i] == n)
    //     {
    //         printf("number found");
    //         return 0;
    //     }
    // } 
    // printf("number not found");
    // return 1;


    string strings[] = {"Battleship", "Cannon", "Boot", "Iron", "Thimble", "Top hat"};
    string s = get_string("Enter the desired word: ");

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("word found\n");
            return 0;
        }
    } 
    printf("word not found\n");
    return 1;
}
