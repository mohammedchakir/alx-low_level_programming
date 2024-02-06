#include "search_algos.h"

/**
 * linear_skip - Search for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current, *next_express, *last_express;

    if (list == NULL)
        return (NULL);

    current = list;
    next_express = list->express;

    while (next_express != NULL && next_express->n < value)
    {
        printf("Value checked at index [%lu] = [%i]\n",
               next_express->index, next_express->n);
        current = next_express;
        next_express = next_express->express;
    }

    last_express = current;

    if (next_express != NULL)
    {
        printf("Value checked at index [%lu] = [%i]\n",
               next_express->index, next_express->n);
        printf("Value found between indexes [%lu] and [%lu]\n",
               current->index, next_express->index);
    }
    else
    {
        printf("Value found between indexes [%lu] and [%lu]\n",
               current->index, last_express->index);
    }
    while (current->next != NULL && current->next->n < value)
    {
        printf("Value checked at index [%lu] = [%i]\n",
               current->next->index, current->next->n);
        current = current->next;
    }
    printf("Value checked at index [%lu] = [%i]\n",
           current->index, current->n);

    if (current->n == value)
        return (current);
    else
        return (NULL);
}
