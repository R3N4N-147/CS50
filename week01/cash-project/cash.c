#include <cs50.h>
#include <stdio.h> //cd cash-project

int main(void)
{
    int change;
    do // get how much change the operator owed.
    {
        change = get_int("Change owed in cents: ");
    }
    while (change < 0);

    // largest-to-smallest approach
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0; // variables
    // Using the int type and division to solve the problem because it returns an integer number.
    quarters = change / 25;
    change = change - 25 * quarters;

    dimes = change / 10;
    change = change - 10 * dimes;

    nickels = change / 5;
    change = change - 5 * nickels;

    pennies = change / 1;
    change = change - 1 * pennies;

    printf("Coins: %i\n", quarters + dimes + nickels + pennies);
}
