#include <cs50.h> //get_int
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    int h; // height
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    // print a pyramid of that height
    for (int i = 0; i < h; i++) //(initialization; condition; update)
    {
        print_row(h - i - 1, i + 1); //
    }
}

void print_row(int spaces, int bricks) // function: void(type) print_row(name)
{
    for (int j = 0; j < spaces; j++) // print leading spaces
    {
        printf(" ");
    }
    for (int i = 0; i < bricks; i++) // print bricks
    {
        printf("#");
    }
    printf("  ");                    // easy way to solve how to input the 2 gaps.
    for (int i = 0; i < bricks; i++) // print bricks
    {
        printf("#");
    }
    printf("\n");
}
