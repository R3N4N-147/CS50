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
        printf("%c", toupper(s[i])); // calling Function
    }
    printf("%s\n", s);
}
