#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the newly allocated duplicate string, or NULL if failed.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	duplicate[i] = '\0';

	return (duplicate);
}
