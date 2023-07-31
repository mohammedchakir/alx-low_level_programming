#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of integers.
 * @a: Pointer to the 2D square matrix (1D array) of integers.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("Sum of main diagonal: %d\n", sum1);
	printf("Sum of secondary diagonal: %d\n", sum2);
}
