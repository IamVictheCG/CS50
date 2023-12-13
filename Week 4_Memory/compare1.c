// Compares two strings' addresses

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get two strings
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Compare strings' addresses
    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
    // can't compare strings directly, because their addresses are different. you need a library, specifically string.h. see in compare2.c.
    //with the exception that you convert then to pointers, like this...(*s == *t). But this is not quite effective int the sense that it only compares the fisrt character of the two addresses
}
