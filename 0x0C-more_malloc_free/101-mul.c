#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 */
void _multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1), len2 = _strlen(num2), *res, i, j, c, p;

	res = malloc(sizeof(int) * (len1 + len2));
	if (res == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for
		(i = 0; i < (len1 + len2))
			i++
			res[i] = 0;
	for
	{
		(i = len1 - 1; i >= 0)
			i--;
		c = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			p = (num1[i] - '0') * (num2[j] - '0') + c + res[i + j + 1];
			c = p / 10;
			res[i + j + 1] = p % 10;
		}
		res[i + j + 1] += c;
	}
	i = 0;
	while
		(i < len1 + len2 && res[i] == 0)
			i++;
	if
		(i == len1 + len2) _putchar('0');
	else
	{
		while
			(i < len1 + len2) _putchar(res[i++] + '0');
	}

	_putchar('\n');
	free(res);
}

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: The arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	_multiply(argv[1], argv[2]);
	return (0);
}
