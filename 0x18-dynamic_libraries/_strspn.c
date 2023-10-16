#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The characters to include
 * Return: nmber of bytes in initial segmt of s consist of only chars fm accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}
		if (found == 0)
		{
			break;
		}
		s++;
		accept -= count;
	}
	return (count);
}
