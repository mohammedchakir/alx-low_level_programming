#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Free a listint_t linked list (handles loops).
 * @h: Pointer to a pointer to the head node of the list.
 * Return: Size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		count++;
		free(temp);

		if (temp == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (count);
}
