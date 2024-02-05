#include "search_algos.h"

/**
 * exponential_search - Search for a value in a sorted array using exponential search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t low = 0;
    size_t high;

    if (array == NULL)
        return -1;

    if (array[0] == value)
    {
        printf("Value checked array[0] = [%d]\n", array[0]);
        return 0;
    }

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, (bound < size - 1) ? bound : size - 1);

    high = (bound < size - 1) ? bound : size - 1;

    size_t i;
    for (i = low; i <= high; i++)
    {
        printf("Searching in array: ");
        for (size_t j = low; j <= high; j++)
        {
            printf("%d", array[j]);
            if (j < high)
                printf(", ");
        }
        printf("\n");

        if (array[i] == value)
            return i;
        else if (array[i] < value)
            low = i + 1;
        else
            high = i - 1;
    }

    return -1;
}
