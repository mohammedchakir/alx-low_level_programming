#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 * The diagonal should end with a '\n'.
 * If n is 0 or less, the function should only print a '\n'.
 */
void print_diagonal(int n)
{
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (spaces = 0; spaces < n; spaces++)
	{
		int i;

		for (i = 0; i < spaces; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
