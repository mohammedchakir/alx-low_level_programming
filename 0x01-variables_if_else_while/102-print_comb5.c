#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * ranging from 00 to 99, separated by a space and comma.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		int firstDigit1 = i / 10;
		int secondDigit1 = i % 10;

		for (j = i; j <= 99; j++)
		{
			int firstDigit2 = j / 10;
			int secondDigit2 = j % 10;

			if (i != j)
			{
				putchar('0' + firstDigit1);
				putchar('0' + secondDigit1);
				putchar(' ');
				putchar('0' + firstDigit2);
				putchar('0' + secondDigit2);

				if (!(i == 98 && j == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

