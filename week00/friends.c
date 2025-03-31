#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // ask to our friends in put

    // Name
    string name = get_string("What's your name? ");
    // age
    int age = get_int("What's your age? ");
    // hometown
    string hometown = get_string("What's your hometown? ");
    //phone number
    string number = get_string("What's your phone number? ");

    printf("My new friend's name is %s, %i, they are from %s and their phone number is %s.\n", name, age, hometown, number);
}
