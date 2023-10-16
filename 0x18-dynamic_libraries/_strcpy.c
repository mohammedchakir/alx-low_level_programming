#include <unistd.h>

/**
 * _strcpy - Copies a string
 * @dest: The destination buffer
 * @src: The source string
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;
	while ((*dest++ = *src++))
	{
	}
	return (temp);
}
