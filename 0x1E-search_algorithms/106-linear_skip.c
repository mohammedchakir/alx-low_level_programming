#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * linear_skip - Search for a value in a sorted skip list using Linear skip search
 * @list: Pointer to the head of the skip list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current = list;
    skiplist_t *express = NULL;

    if (list == NULL)
        return NULL;

    while (current)
    {
        express = current->express;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

        if (express == NULL || express->n >= value)
        {
            if (express)
                printf("Value found between indexes [%lu] and [%lu]\n", current->index, express->index);
            else
                printf("Value found between indexes [%lu] and [%lu]\n", current->index, current->index);

            while (current)
            {
                printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
                if (current->n == value)
                    return current;
                current = current->next;
            }

            return NULL;
        }

        current = express;
    }

    return NULL;
}

