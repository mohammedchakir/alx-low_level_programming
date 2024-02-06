#include "search_algos.h"

/**
 * jump_search - Search for a value in a sorted array using jump search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    size_t step = sqrt(size);
    size_t prev = 0;

    printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
    while (array[prev] < value)
    {
        prev = step;
        step += sqrt(size);

        if (prev >= size)
            break;

        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

    for (size_t i = prev; i < size && i < step; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        if (array[i] == value)
            return i;
    }

    return -1;
}
