#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])//remember argv[0] = "hold information", argv[1] = "hold 00000" to say "this job is done".**
{
    if (argc != 2)// **that's why here is checkin it is !=2.
    {
        printf("Missing command-line argument\n");
        return 1; //check when you received this number
    }
    printf("Hello, %s\n", argv[1]);
    return 0; //check when you received this number
}

// let's make some tests
//
// make status
// ./status + enter
// echo $?
// ./status + Renan + enter
// echo $?
// and see wha'ts happen.
