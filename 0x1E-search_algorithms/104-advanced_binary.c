#include "search_algos.h"

int binary_search_recursion(int *array, int value, size_t left, size_t right);

/**
 * advanced_binary_recursive - Searches for a value in a sorted array of integers
 *                             using the Binary search algorithm (recursive)
 * @array: Pointer to the first element of the array to search in
 * @left: Index where the search should start
 * @right: Index where the search should end
 * @value: Value to search for
 *
 * Return: Index where @value is located, or -1 if not found
 */
int binary_search_recursion(int *array, int value, size_t left, size_t right)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (left + right) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
		printf("%i%s", array[i], i == right ? "\n" : ", ");

	if (array[left] == value)
		return ((int)left);

	if (array[left] != array[right])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value, mid + 1, right));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value, left, mid));
	}

	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index where @value is located, or -1 if not found or @array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, left, right));
}
