#include <stdlib.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count = 0, word_len = 0, str_len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
		str_len++;

	for (i = 0; i < str_len; i++)
	{
		if (str[i] != ' ')
		{
			word_count++;
			while (str[i] != ' ' && str[i] != '\0')
			{
				word_len++;
				i++;
			}
		}
	}

	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				words[k] = malloc((j - i + 1) * sizeof(char));
			if (words[k] == NULL)
			{
				for (i = 0; i < k; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			for (j = 0; str[i] != ' ' && str[i] != '\0'; j++, i++)
				words[k][j] = str[i];
			words[k][j] = '\0';
			k++;
		}
		else
			i++;
	}
	words[k] = NULL;
	return (words);
}
