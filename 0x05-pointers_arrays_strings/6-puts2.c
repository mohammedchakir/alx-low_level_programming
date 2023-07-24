#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 *starting with the first character
 *@str: The input string to print every other character from
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}

