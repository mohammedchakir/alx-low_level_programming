#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_map[10] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't', '\0', 'e'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_map[j] || str[i] == leet_map[j] - ('a' - 'A'))
			{
				str[i] = '0' + j;
				break;
			}
		}
	}

	return (str);
}
