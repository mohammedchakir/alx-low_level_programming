#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
