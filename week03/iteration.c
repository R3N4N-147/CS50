#include <cs50.h> //get_int
#include <stdio.h>
// cd week03
// code code.c

// make search
// ./search
void draw(int n); // "declare the prototype at the top"

int main(void)
{
    int heigth = get_int("Height: ");
    draw(heigth);
}

// print a pyramid of that height
void draw(int n) // function: void(type) print_row(name)
{
    for (int i = 0; i < n; i++) // print bricks
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
