// This code verify if a card is an Amex, MasterCard, a Visa or invalid.
#include <cs50.h> //cd credit-project
#include <stdio.h>
int countDigits(long n);

int main(void)
{
    long card, cardsum, maindigits;
    int digits = 0;
    int a = 0, b = 0, bb = 0, c = 0, x = 0, y = 0;

    do
    {
        card = get_long("Input only Card Number's: ");
        cardsum = card;
        digits = countDigits(card);
        // printf("Number of digits: %d\n", digits);
        if (digits <= 12)
        {
            break;
        }
    }
    while (digits < 13 || digits > 16);

    maindigits = card;

    card /= 10; // remove last digit once.
    while (cardsum > 0)
    {
        a = card % 10;
        x = cardsum % 10;
        b = a * 2;
        if (b > 9)
        {
            while (b >= 1)
            {
                bb = b % 10;
                c = c + bb;
                b /= 10;
            }
        }
        c = c + b;
        y = y + x;
        card /= 100; // remove last digit.
        cardsum /= 100;

        if (card == 0)
        {
            c = c + y;
        }
    }

    if ((c % 10) == 0)
    {
        if (digits == 15 &&
            ((maindigits / 10000000000000) == 34 || (maindigits / 10000000000000) == 37))
        {
            printf("AMEX\n"); // Amex, 15 dig, 34 or 37
        }
        else if (digits == 16 &&
                 (maindigits / 100000000000000 >= 51 && maindigits / 100000000000000 <= 55))
        {
            printf("MASTERCARD\n"); // MasterCard, 16 dig, 51,52,53,54 or 55
        }
        else if ((digits == 13 || digits == 16) &&
                 (maindigits / 1000000000000 == 4 || maindigits / 1000000000000000 == 4))
        {
            printf("VISA\n"); // Visa, 13 or 16 dig, 4
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

// This code check the number of digits (obs. research on internet and incremented by me.)
int countDigits(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10; // Reduce the number by a factor of ten
        count++;    // Increment count for each reduction
    }
    return count;
}
