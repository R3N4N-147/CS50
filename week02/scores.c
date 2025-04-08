#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    // printf("Average: %f\n", (score1 + score2 + score3) / 3); // Wrong: Type 'float', 'int'
    // printf("Average: %f\n", (score1 + score2 + score3) / (float)3); // OK: Using cast to change temporarily the type to a float
    printf("Average: %f\n", (score1 + score2 + score3) / 3.0); // OK: simple using a dot (.)
}
