#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
    char letter;
    int i;

    for (i = 0; i < 10; i++)
    {
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter);
            if (letter == 'j') // Print a new line after every 10 characters (j is the 10th character in the alphabet)
                _putchar('\n');
        }
    }
}
