#include <cs50.h>
#include <stdio.h>
#include <string.h> // New library -> strlen();

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    int length = strlen(s); // arguably marginally better; better desing;
    // why? I'm calling strlen once, storing the return value in a variable
    // and then using it again and again
    for (int i = 0; i < length; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

