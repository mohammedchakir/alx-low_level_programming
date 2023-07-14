#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits,
 *              separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			/* Convert the digits to characters and print them */
			putchar(i + '0');
			putchar(j + '0');

			/* Print a comma and a space if it's not the last combination */
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return 0;
}
