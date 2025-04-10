#include <cs50.h>
#include <ctype.h> // Library, Documentation: https://manual.cs50.io/#ctype.h
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // Change s[i] to uppercase
            printf("%c", toupper(s[i])); // calling Function
        }
        else
        {
            // just print s[i]
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
