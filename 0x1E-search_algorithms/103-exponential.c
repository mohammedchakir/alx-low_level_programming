#include "search_algos.h"

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
    size_t bound = 1, min;

    if (array == NULL)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    min = (bound / 2) < (size - 1) ? (bound / 2) : (size - 1);
    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min);
    return (binary_search(array, bound / 2, min, value));
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @left: Index where the search should start
 * @right: Index where the search should end
 * @value: Value to search for
 *
 * Return: Index where @value is located, or -1 if not found
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
    size_t mid, i;

    while (left <= right)
    {
        printf("Searching in array:");
        for (i = left; i <= right; i++)
        {
            printf("%s%d", i == left ? " " : ", ", array[i]);
        }
        printf("\n");

        mid = (left + right) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
