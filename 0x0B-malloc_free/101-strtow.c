#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str is NULL or empty - NULL.
 *         If memory allocation fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int i, j;
	int word_count = 0;
	int word_len = 0;
	char **words = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			word_len++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				word_count++;
		}
	}

	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	word_count = 0;
	word_len = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			word_len++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				words[word_count] = malloc((word_len + 1) * sizeof(char));

				if (words[word_count] == NULL)
				{
					for (j = 0; j < word_count; j++)
						free(words[j]);

					free(words);
					return (NULL);
				}

				for (j = 0; j < word_len; j++)
					words[word_count][j] = str[i - word_len + 1 + j];

				words[word_count][j] = '\0';
				word_count++;
				word_len = 0;
			}
		}
	}
	words[word_count] = NULL;
	return (words);
}
