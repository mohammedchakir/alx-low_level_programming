#include "search_algos.h"

int advanced_binary_recursive(int *array, size_t low, size_t high, int value);

/**
 * advanced_binary - Search for value in sorted array using advced binry search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	return (advanced_binary_recursive(array, low, high, value));
}

/**
 * advanced_binary_recursive - Recursive helper function for
 * advanced binary search
 * @array: Pointer to the first element of the array
 * @low: Starting index of the search range
 * @high: Ending index of the search range
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int binary_search_recursion(int *array, size_t high, size_t low, int value)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value, mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value, low, mid));
	}

	return (-1);
}
