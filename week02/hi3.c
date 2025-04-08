#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string words [2];
    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);
    printf("\n");
// words[n] is holding a place for a word
// words is the array and words[0] is the first string in that array
// "a string is a array for it self"
// if you want go to the first letter for the first word you can use this syntax:
    printf("%c\n", words[0][0]);
    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);
}
