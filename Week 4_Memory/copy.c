#include <stdio.h> 
#include <ctype.h> 
#include <cs50.h> 
#include <string.h>
#include <stdlib.h>

int main(void) {
    char *s = get_string("s: ");
    //malloc - Memory Allocation
    if(s == NULL) {
        return 1;
    }

    char *t = malloc(strlen(s + 1));

    if(t == NULL) {
        return 1;
    }

    // int n = strlen(s) + 1;
    // for (int i = 0; i < n; i++)
    // {
    //     t[i] = s[i];
    // }
    
    strcpy(t, s);
    
    if(strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }
    

    printf("s is : %s\n",s);
    printf("t is : %s\n",t);
    free(t);

    return 0;
}