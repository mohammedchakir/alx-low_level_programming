#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9 (excluding 2 and 4)
 * uses _putchar twice in the code.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');
	}

	_putchar('\n');
}
