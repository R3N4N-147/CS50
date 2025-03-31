// first step, named your program. Do it in the terminal prompt.
// second step, include the libraries

// create the main function
// print function or other
// remember: \n ("backslash n") = new line

// In the terminal:
//  1o run to compile, write: make program's name (write -> machine)
//  2o run (execute), write: ./hello

// Remember: Every time you make any changes,
// make sure you 'make' the program again.

#include <cs50.h>
#include <stdio.h>

int main(void) // main function
{
    string name = get_string("What's your name?\n");
    printf("Hello, %s\n", name);
}

// Types and format codes:
//  Numbers: int (%i); float(%f)
//  text: char (%c); string (%s)
//  True/False: bool (%i)
