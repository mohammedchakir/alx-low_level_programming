#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of the times table to be printed
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int a, b, op;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			op = a * b;
			if (b == 0)
			{
				_putchar('0' + op);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (op <= 9)
					_putchar(' ');
				if (op <= 99)
					_putchar(' ');
				_putchar('0' + (op / 100));
				_putchar('0' + ((op / 10) % 10));
				_putchar('0' + (op % 10));
			}
		}
		_putchar('\n');
	}
}

