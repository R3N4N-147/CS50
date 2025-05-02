#include <cs50.h> // get_string
#include <stdio.h>  // printf()
#include <string.h> // strcmp()

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[3]; // array people

    people[0].name = "David";
    people[0].number = "+1-617-495-1000";

    people[1].name = "John";
    people[1].number = "+1-617-495-2750";

    people[2].name = "Renan";
    people[2].number = "+1-617-495-1000";

    string name = get_string("Name: ");
    for (int i = 0; i <3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        // If the return value of strcmp passing in the current person's name and the name that the human just typed in returns a value of 0 (0 == true)
        {
            // then inside
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
