#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary - Search for a value in a sorted array using advanced binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value);

int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}

int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
    size_t mid;

    if (low > high)
        return -1;

    printf("Searching in array: ");
    for (size_t i = low; i <= high; i++)
    {
        printf("%d", array[i]);
        if (i < high)
            printf(", ");
    }
    printf("\n");

    mid = low + (high - low) / 2;

    if (array[mid] == value)
    {
        if (mid == low || array[mid - 1] != value)
            return mid;
        else
            return advanced_binary_recursive(array, low, mid, value);
    }
    else if (array[mid] > value)
    {
        return advanced_binary_recursive(array, low, mid - 1, value);
    }
    else
    {
        return advanced_binary_recursive(array, mid + 1, high, value);
    }
}
