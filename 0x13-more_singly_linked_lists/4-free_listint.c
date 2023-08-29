#include "lists.h"

/**
 * free_listint - Free all nodes of a listint_t list.
 * @head: Pointer to the head node of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
