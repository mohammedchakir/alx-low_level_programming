#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: The pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
