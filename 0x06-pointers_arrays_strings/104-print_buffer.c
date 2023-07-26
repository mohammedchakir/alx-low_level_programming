#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Print the content of a buffer in a formatted manner.
 * @b: Pointer to the buffer.
 * @size: Number of bytes to be printed.
 */
void print_buffer(char *b, int size)
{
	int i, j;
	unsigned char *buffer = (unsigned char *)b;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x ", buffer[i + j]);
			}
			else
			{
				printf("   ");
			}

			if (j == 4)
			{
				printf(" ");
			}
		}
		printf(" ");
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = buffer[i + j];

				printf("%c", (c >= 32 && c <= 126) ? c : '.');
			}
			else
			{
				break;
			}
		}

		printf("\n");
	}
}
