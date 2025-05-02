#include <cs50.h> //get_int
#include <stdio.h>
// cd week03
// code name.c

// make name
// ./name
void draw(int n); // "declare the prototype at the top"

int main(void)
{
    int heigth = get_int("Height: ");
    draw(heigth);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }

    draw(n-1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
