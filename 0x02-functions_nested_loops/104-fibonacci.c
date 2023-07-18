#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long prev1 = 1, prev2 = 2, current;

	printf("%lu, %lu", prev1, prev2);

	for (count = 2; count < 98; count++)
	{
		current = prev1 + prev2;

		printf(", %lu", current);

		prev1 = prev2;
		prev2 = current;
	}

	printf("\n");

	return (0);
}
