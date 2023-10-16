#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: The pointer to memory
 * @b: The value to set
 * @n: The number of bytes to set
 * Return: The pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
