#include <cs50.h> // get_string
#include <ctype.h>
#include <math.h>   // round
#include <stdio.h>  // printf()
#include <string.h> // strlen()
#include <stdlib.h> // atoi

// cd week03
// code search.c

// make search
// ./search
// choose a number bet {20, 500, 10, 5, 100, 1, 50}

int main(void)
{
    // int numbers[3 or 7 or something]
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0; // return 0 to signal success
        }
        // Don't use 'else' here
    }
    printf("Not found\n");
    return 1; // return 1 to signnfy failure
    // Return 0 ou 1 como um sinal pro code entender o que executar
}
