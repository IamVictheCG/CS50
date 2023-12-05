#include <stdio.h>

int main() {
    int decimalNumber = 72;

    printf("Decimal: %d\n", decimalNumber);
    printf("Binary:  ");
    
    // Loop through each bit from 7 to 0 (8 bits in total)
    for (int i = 7; i >= 0; i--) {
        // Shift the bits to the right and check the least significant bit
        printf("%d", (decimalNumber >> i) & 1);
    }

    printf("\n");

    return 0;
}
 