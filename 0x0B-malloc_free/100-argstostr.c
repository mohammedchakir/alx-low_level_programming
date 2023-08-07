#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int total_length = 0;
	char *concatenated_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}

	concatenated_str = malloc((total_length + 1) * sizeof(char));

	if (concatenated_str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			concatenated_str[k] = av[i][j];
			k++;
			j++;
		}
		concatenated_str[k] = '\n';
		k++;
	}

	concatenated_str[k] = '\0';

	return (concatenated_str);
}
