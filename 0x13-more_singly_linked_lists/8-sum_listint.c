#include "lists.h"

/**
 * sum_listint - Calculate the sum of all data (n) in a listint_t linked list.
 * @head: Pointer to the head node of the list.
 * Return: Sum of all data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
