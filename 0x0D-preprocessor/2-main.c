#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf(__FILE__);
	printf("\n");
	return (0);
}
