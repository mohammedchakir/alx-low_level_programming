#include "main.h"

/**
 * _strncpy - Copies n characters from one string to another
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to copy
 * Return: The pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (temp);
}
