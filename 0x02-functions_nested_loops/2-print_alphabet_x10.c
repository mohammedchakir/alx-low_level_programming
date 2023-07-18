#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
    char letter = 'a';
    int i = 0;

    while (i < 10)
    {
        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }

        i++;
        letter = 'a'; // Reset letter to 'a' for the next iteration.
    }

    _putchar('\n');
}

