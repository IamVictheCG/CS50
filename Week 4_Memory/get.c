#include <stdio.h>

int main(void) {
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("%i\n", x);

    // ==============================================================================

    char *s = NULL;
    printf("s: ");
    scanf("%s", &s);
    printf("%s",s);
}