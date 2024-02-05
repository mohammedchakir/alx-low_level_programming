#include "search_algos.h"

/**
 * exponential_search - Search for a value in a sorted
 array using exponential search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    
    if (array == NULL)
        return -1;
    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);
    size_t low = bound / 2;
    size_t high = (bound < size - 1) ? bound : size - 1;

    size_t i;
    for (i = low; i <= high; i++)
    {
        printf("Searching in array: ");
        printf("%d", array[i]);
        if (i < high)
            printf(", ");
        printf("\n");

        if (array[i] == value)
            return i;
    }

    return -1;
}
