#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @s: The string to print
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}
