#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //for (int i = 0; i <= 3; i++) (buggy: "<=")
    for (int i = 0; i < 3; i++)
    {
        printf("i is %i\n", i);
        printf("#\n");
    }
}
