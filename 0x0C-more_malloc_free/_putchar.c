#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
