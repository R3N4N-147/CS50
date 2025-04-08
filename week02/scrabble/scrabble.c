// Scrabble game
#include <cs50.h>
#include <ctype.h> // function: toupper(s[i])
#include <stdio.h>
#include <string.h>
// cd week02/scrabble

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // first I do need a place holder for the words
    // Prompt the user for two words
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Compute the score of each word
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins! ");
        printf("Word \"%s\" have %i points.\n", word1, score1);
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins! ");
        printf("Word \"%s\" have %i points.\n", word2, score2);
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // Keep track of score
    int score = 0;

    // Compute score for each character
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;
}

// A = E = I = L = N = O = R = S = T = U = 1;
// D = G = 2;
// B = C = M = P = 3;
// F = H = V = W = Y = 4;
// K = 5;
// J = K = 8;
// Q = Z = 10;
