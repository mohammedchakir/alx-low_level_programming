#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: The destination memory
 * @src: The source memory
 * @n: The number of bytes to copy
 * Return: The pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
