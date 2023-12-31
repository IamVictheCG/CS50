#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]) 
{
    // c[i] = (p[i] + k) % 26
    // string ciphertext;

    if (argc != 2) {
        printf("Usage: ./caesar key");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key");
            return 1;
        }
        
    }
       
    int k = atoi(argv[1]);
    printf("%i\n", k);
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 65 + k) % 26 + 65);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 97 + k) % 26 + 97);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    

    // Usage: ./caesar key
}