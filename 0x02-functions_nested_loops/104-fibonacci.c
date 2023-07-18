#include <stdio.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int count;
	char fib[98][1000];

	strcpy(fib[0], "1");
	strcpy(fib[1], "2");

	for (count = 2; count < 98; count++)
	{
		char temp[1000];
		int carry = 0, len1, len2, sum, i, j;

		len1 = strlen(fib[count - 1]);
		len2 = strlen(fib[count - 2]);

		for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
		{
			sum = carry;

			if (i >= 0)
				sum += fib[count - 1][i] - '0';

			if (j >= 0)
				sum += fib[count - 2][j] - '0';

			carry = sum / 10;
			temp[i + 1] = (sum % 10) + '0';
		}

		if (carry)
			temp[0] = carry + '0';
		else
			temp[0] = '0';

		strcpy(fib[count], &temp[carry ? 0 : 1]);
	}

	printf("%s", fib[0]);

	for (count = 1; count < 98; count++)
	{
		printf(", %s", fib[count]);
	}

	printf("\n");

	return (0);
}
