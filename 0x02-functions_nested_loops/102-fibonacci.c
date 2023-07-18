#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int count = 2;
	long int prev1 = 1, prev2 = 2;

	printf("%ld, %ld", prev1, prev2);
	while (count < 50)
	{
		long int next = prev1 + prev2;
		printf(", %ld", next);

		prev1 = prev2;
		prev2 = next;

		count++;
	}
	printf("\n");
	return (0);
}
