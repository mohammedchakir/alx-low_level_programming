#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
	char leet_map[256] = {0};
	char *leet_str = "4433007711";
	int i, j;

	for (i = 0; leet_str[i] != '\0'; i++)
	{
		leet_map['a' + i] = leet_map['A' + i] = leet_str[i];
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		j = (unsigned char)str[i];
		str[i] = (leet_map[j]) ? leet_map[j] : str[i];
	}

	return (str);
}
