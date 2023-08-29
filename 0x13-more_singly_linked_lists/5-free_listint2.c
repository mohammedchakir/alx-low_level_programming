#include "lists.h"

/**
 * free_listint2 - Free all nodes of a listint_t list and set head to NULL.
 * @head: Pointer to a pointer to the head node of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
