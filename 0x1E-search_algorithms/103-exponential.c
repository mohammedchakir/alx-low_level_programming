#include "search_algos.h"

int binary_search_helper(int *array, int value, size_t low, size_t high);
size_t min(size_t a, size_t b);

/**
 * min - Determines the minimum value between two size_t parameters
 * @a: The first size_t value
 * @b: The second size_t value
 *
 * Returns: The smaller of the two values. If both are equal,
 * returns either one.
 */
size_t min(size_t a, size_t b)
{
    return (a <= b ? a : b);
}

/**
 * binary_search_helper - Performs a binary search on an array of integers
 *                        to find a specific value.
 * @array: Pointer to the first element of the array to be searched.
 * @value: The value to search for.
 * @low: The starting index of the search range.
 * @high: The ending index of the search range.
 *
 * Returns: If the value is found in the array, returns the index containing the value.
 *          If the array is NULL or the value is not found, returns -1.
 */
int binary_search_helper(int *array, int value, size_t low, size_t high)
{
    size_t mid, i;

    if (!array)
        return (-1);

    while (low <= high)
    {
        mid = (low + high) / 2;
        printf("Searching in array: ");
        for (i = low; i <= high; i++)
            printf("%i%s", array[i], i == high ? "\n" : ", ");
        if (array[mid] < value)
            low = mid + 1;
        else if (array[mid] > value)
            high = mid - 1;
        else
            return ((int)mid);
    }

    return (-1);
}


/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index where @value is located, or -1 if not found or @array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = min(bound, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}
