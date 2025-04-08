#include <cs50.h> // get_string
#include <ctype.h>
#include <math.h>   // round
#include <stdio.h>  //standard i o. e.i.: printf()
#include <string.h> // function strlen()

// Declare: A function called count_words()
int count_letters(string text);
// Declare: A function called count_words() that takes a string and returns an int (number of words
// found).
int count_words(string text);
// Declare: A function called count_sentences()
int count_sentences(string text);

int main(void)
{
    // Prompt the user for some text
    string text = get_string("Text: ");

    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text); // call the function count letters
    // printf("Number of letters: %d\n", letters);
    int words = count_words(text); // call the function count words
    // printf("Number of words: %d\n", words);
    int sentences = count_sentences(text); // call the function count sentences
    // printf("Number of sentences: %d\n", sentences);

    // Compute the Coleman-Liau index
    // int index = 0.0588 * L - 0.296 * S - 15.8;
    float L = ((letters / (float) words) * 100);
    float S = ((sentences / (float) words) * 100);
    // printf("L: %f.\n", L);
    // printf("S: %f.\n", S);
    float index = 0;
    index = (0.0588 * L) - (0.296 * S) - 15.8;
    // printf("Index before rounding: %f\n", index);
    //  printf("Coleman-liau index: %d.\n", (int) round(index)); // "( )" around int -> It's a
    //  'cast'.
    index = (int) round(index);

    // Print the grade level
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", (int) index);
    }
}

int count_letters(string text) // function
{
    // Return the number of letters in text
    int count_l = 0;
    int length = strlen(text); // Call my function

    if (length == 0) // if 'zero' return 0 letters
    {
        return 0;
    }
    for (int i = 0; i < length; i++)
    {
        // if (text[i] != ' ' && text[i] != '\n' && text[i] != '\t' && text[i] != '.' && text[i] !=
        // '!' && text[i] != '?')
        if (isalpha(text[i]))
        {
            count_l++;
        }
    }
    return count_l;
}

// This function receives an text and counts the amount of words
int count_words(string text) // function: "Type" "functions name"("input")
{
    // Return the number of words in text
    int count = 0; // Variable that stores the number of words.
    int length = strlen(text);

    if (length == 0) // if 'zero' return 0 words
    {
        return 0;
    }

    // A loop loops through all the characters in the text.
    for (int i = 0; i < length; i++) // for i equals zero; i less than length; increment i
    {
        // This part try to denife what a space can be somewhere in a text.
        // If find a space and the next char is not other space increment a word
        if ((text[i] == ' ' || text[i] == '\n' || text[i] == '\t') &&
            (i > 0 && text[i - 1] != ' ' && text[i - 1] != '\n' && text[i - 1] != '\t'))
        {
            // Checks if the current character is a space, newline, or tab. &&
            // Checks if the previous character is NOT a space or newline.
            // If both conditions are true, increment the counter
            count++;
        }
    }
    if (length > 0 && text[length - 1] != ' ' && text[length - 1] != '\n' &&
        text[length - 1] != '\t')
    {
        // If the last character is NOT a space,
        // it means there is one more word to count (the last word).
        count++;
    }

    return count;
}

// Return the number of sentences in text
int count_sentences(string text)
{
    int count_s = 0;
    int length = strlen(text);

    for (int i = 0; i < length; i++)
    {
        // O que define o fim de uma sentença?
        // após a ultima letra vem o ponto final.
        // Após o ponto final tenho coisas como um espaço " "; uma nova linha "\n" ou uma tabulação
        // "\t".
        if ((text[i] == '.' && text[i - 1] != '.') || (text[i] == '?' && text[i - 1] != '?') ||
            (text[i] == '!' &&
             text[i - 1] != '!')) // okay, I did this cuz' we have situations like: '..." or "???'
                                  // ... but I realize that I can improve a lot ... so I stop.
        {
            count_s++;
        }
    }
    return count_s;
}
