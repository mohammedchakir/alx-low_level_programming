#include <unistd.h>

/**
 * _strlen - Calculates the length of a string
 * @s: The string to calculate the length of
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
