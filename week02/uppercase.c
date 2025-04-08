#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z') // comparating with the ASCII value
        {
            // Change s[i] to uppercase.
            // Tip: think how to do it according to the ASCII spreadsheet
            // just subtract 32. ASCII: "65 = A", 97 = a. "66 = B", 98 = b.
            printf("%c", s[i] - 32);
        }
        else
        {
            // just print s[i]
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
