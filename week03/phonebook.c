#include <cs50.h> // get_string
#include <stdio.h>  // printf()
#include <string.h> // strcmp()

int main(void)
{
    string names[] = {"David", "John", "Renan"};
    string numbers[] = {"+1-617-495-1000", "+1-617-495-2750", "+1-617-495-1000"};

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
