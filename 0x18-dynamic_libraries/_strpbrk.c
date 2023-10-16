#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: The string to search
 * @accept: The set of bytes to search for
 * Return: ptr to byts in s matches one of byts in accept, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
