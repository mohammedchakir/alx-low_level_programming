#include "search_algos.h"

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
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    size_t i;
    size_t mid;

    if (left > right)
        return (-1);

    mid = (left + right) / 2;

    printf("Searching in array:");
    for (i = left; i <= right; i++)
        printf("%i%s", i == right ? "\n" : ", ", array[i]);

    if (array[left] == value)
        return ((int)left);
        
    if (array[left] != array[right])
    {
        if (array[mid] < value)
            return (advanced_binary_recursive(array, mid + 1, right, value));
        if (array[mid] >= value)
            return (advanced_binary_recursive(array, left, mid, value));
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
    size_t left = 0;
    size_t right = size - 1'

    if (!array)
        return (-1);

    return (advanced_binary_recursive(array, left, right, value));
}
