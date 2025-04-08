//This program demonstrate how to use a function how give me the length of a string
#include <cs50.h>
#include <stdio.h>
#include <string.h> // New library -> strlen();

int main(void)
{
    string name = get_string("Name: ");
    int length = strlen(name);// Call my function
    //printf("%i\n", length);
    return length;


