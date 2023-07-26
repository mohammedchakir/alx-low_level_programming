#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_map = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = rot13_map[j];
				break;
			}
		}
	}

	return (str);
}
