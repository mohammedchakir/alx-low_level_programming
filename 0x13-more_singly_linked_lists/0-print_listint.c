#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print all elements of a listint_t list.
 * @h: Pointer to the head node of the list.
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_count++;
	}

	return (node_count);
}
