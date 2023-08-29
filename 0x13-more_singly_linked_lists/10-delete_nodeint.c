#include "lists.h"

/**
 * delete_nodeint_at_index -Delete node at given index in listint_t linked list
 * @head: Pointer to a pointer to the head node of the list.
 * @index: Index of the node to be deleted (starting from 0).
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL)
	{
		if (count == index - 1)
		{
			if (current->next == NULL)
				return (-1);
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		count++;
		current = current->next;
	}

	return (-1);
}
