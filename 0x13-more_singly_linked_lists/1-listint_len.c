#include "lists.h"

/**
 * listint_len - Count the number of elements in a listint_t list.
 * @h: Pointer to the head node of the list.
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
