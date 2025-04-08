#include <cs50.h> // get_string
#include <ctype.h>
#include <math.h>   // round
#include <stdio.h>  // printf()
#include <string.h> // strlen()
#include <stdlib.h> // atoi

// cd week02/caesar + enter
// ./caesar

bool only_digits(string s);

int main(int argc, string argv[]) // remember argv[0] = "hold information", argv[1] = "hold 00000" to say "this job is done".**
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1; //
    }

    // Make sure every character in argv[1] is a digit
    if (!only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert argv[1] from a `string` to an `int`
    int key = atoi(argv[1]);

    // Prompt user for plaintext
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    // For each character in the plaintext:
    for (int i = 0, length = strlen(plaintext); i < length; i++)
    {
        char c = plaintext[i];

        // Rotate the character if it's a letter
        if (isupper(c)) // check if char is upper
        {
            printf("%c", 'A' + (c - 'A' + key) % 26);
        }
        else if (islower(c)) // check if char is lower
        {
            printf("%c", 'a' + (c - 'a' + key) % 26);
        }
        else
        {
            printf("%c", c); //
        }
    }

    printf("\n");
    return 0;
}

// check if a string have only digits
bool only_digits(string s)
{
    for (int i = 0, length = strlen(s); i < length; i++) // as seing in upercase3
    {
        if (!isdigit(s[i])) // if not (!) a number
        {
            return false; // return false if found one char who is not a digit
        }
    }
    return true; // return true if all char are digits
}
