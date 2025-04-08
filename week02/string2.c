#include <cs50.h>
#include <stdio.h>
#include <string.h> // New library -> strlen();

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    //for (int i = 0; n = strlen(s); i < n; i++) // Take care: COMMA
    for (int i = 0, n = strlen(s); i < n; i++) // OK
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

