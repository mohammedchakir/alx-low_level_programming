#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: Variable number of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL)
			printf("%s", separator);
	}

	if (n > 0)
		printf("%d", va_arg(args, int));

	va_end(args);

	printf("\n");
}
