//This program give me the length of a string
#include <cs50.h>
#include <stdio.h>

int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");
    int length = string_length(name);// Call my function
    printf("%i\n", length);
}

int string_length(string s)// Function
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}
