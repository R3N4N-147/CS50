#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
            printf("Hello, %s\n", argv[1]);
    }
    else
    {
            printf("Hello, world\n");
    }
}

// Do some tries...
// In the terminal: make 'program name's'
// In the terminal: ./program name's 'your string' + enter
// for instance...
// ./greet2
// ./greet2 Renan
// ./greet2 Renan da Fonseca
// and see what's happen :)
