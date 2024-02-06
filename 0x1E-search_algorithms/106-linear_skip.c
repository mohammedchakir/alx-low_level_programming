#include "search_algos.h"

/**
 * linear_skip - Search for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *express = list, *temp;

    if (list == NULL)
        return (NULL);

    while (express->express && express->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               express->express->index, express->express->n);
        express = express->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n",
           express->index, express->express ? express->express->index : 0);

    temp = express;
    while (temp && temp->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               temp->index, temp->n);
        temp = temp->next;
    }

    if (temp && temp->n == value)
    {
        printf("Found %d at index: %lu\n", value, temp->index);
        return (temp);
    }

    printf("Found %d at index: (nil)\n", value);
    return (NULL);
}
