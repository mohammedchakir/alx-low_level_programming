#include "search_algos.h"
#include <stdio.h>

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
    if (array == NULL)
        return -1;

    if (array[0] == value)
    {
        printf("Value checked array[0] = [%d]\n", array[0]);
        return 0;
    }

    size_t bound = 1;
    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, (bound < size - 1) ? bound : size - 1);
    size_t low = bound / 2;
    size_t high = (bound < size - 1) ? bound : size - 1;

    // Perform binary search in the identified range
    while (low <= high)
    {
        size_t mid = low + (high - low) / 2;

        printf("Searching in array: ");
        for (size_t i = low; i <= high; i++)
        {
            printf("%d", array[i]);
            if (i < high)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
