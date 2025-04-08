#include <cs50.h>
#include <stdio.h>
#include <string.h> // New library -> strlen();

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i = 0; i < strlen(s); i++)
// In this case I'm calling strlen again and again
// whitout necessity
// lets change this in the next program.
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

