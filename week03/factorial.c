#include <cs50.h>
#include <stdio.h>

int f(int n);

int main(void)
{
    // Get user's input
    int number;
    do
    {
        number = get_int("Number: ");
    }
    while (number < 0);

    // Call the factorial function
    int result = f(number);
    printf("Factorial of %i is %i.\n", number, result);
}

int f(int n) // declaring my factorial function
{
    //Base case (my base case is zero, I can't call factorial function anymore)
    if (n == 0)
    {
        return 1;
    }
    else
    {
        //Recursive case (something that I keep doing)
        // return n = n * f(n - 1); OR
        return n * f(n - 1);
    }
}
