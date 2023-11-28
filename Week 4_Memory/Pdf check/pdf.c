#include <stdio.h>
#include <stdint.h>
#include <cs50.h>

int main(int argc, string argv[]) {
    if(argc != 2) {
        printf("improper usage!");
        return 1;
    }
    
    //open file
    string fileName = argv[1];
    FILE *file = fopen(fileName, "r");

    if (file == NULL) {
        printf("No such file found\n");
        return 1;
    }

    uint8_t buffer[4];
    uint8_t signature[4] = {37, 80, 68, 70};
    fread(buffer, 1, 4, file);

    for (int i = 0; i < 4; i++)
    {
        if (buffer[i] != signature[i])
        {
            printf("Likely not a PDF");
            fclose(file);
            // printf("%i ", buffer[i]);
            // printf("%i ", buffer[i]);
            return 0;
        }
    }
    printf("Most likely a PDF\n");
    printf("\n");
    fclose(file);
    return 0;
    
}