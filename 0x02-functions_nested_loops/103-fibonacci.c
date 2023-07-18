#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints the sum of the even-valued terms in Fibonacci.
 * Return: 0 (Success)
 */
int main(void)
{
	long int prev1 = 1, prev2 = 2, current = 0;
	long int sum = 2;

	while (current <= 4000000)
	{
		current = prev1 + prev2;

		if (current % 2 == 0)
		{
			sum += current;
		}

		prev1 = prev2;
		prev2 = current;
	}

	printf("%ld\n", sum);
	return (0);
}
