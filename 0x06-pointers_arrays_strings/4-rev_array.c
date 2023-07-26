#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements in the array
 * Description: This function takes an array of integers and its size as input.
 * It reverses the content of the array in-place.
 * For example, if the input array is {1, 2, 3, 4, 5}, the function will modify
 * the array to become {5, 4, 3, 2, 1}.
 */
void reverse_array(int *a, int n)
{
	int temp, i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
