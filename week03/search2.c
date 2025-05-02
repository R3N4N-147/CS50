#include <cs50.h> // get_string
#include <stdio.h>  // printf()
#include <string.h> // strcmp()

// cd week03
// code search2.c

// make search2
// ./search2
// choose a number bet {20, 500, 10, 5, 100, 1, 50}

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        // if (strings[i] == s) atention: == works fine for INT, LONGS, Chars,
        // but not for strings
        // Lets use something more powerful > strcmp()
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
