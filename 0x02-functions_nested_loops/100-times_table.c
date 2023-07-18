#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of the times table to be printed
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (j == 0)
				{
					_putchar('0' + product);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (product <= 9)
						_putchar(' ');
					if (product <= 99)
						_putchar(' ');
					_putchar('0' + (product / 100));
					_putchar('0' + ((product / 10) % 10));
					_putchar('0' + (product % 10));
				}
			}
			_putchar('\n');
		}
	}
}
