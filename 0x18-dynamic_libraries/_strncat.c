#include "main.h"

/**
 * _strncat - Concatenates n characters from a string to another
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to concatenate
 * Return: The pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (temp);
}
