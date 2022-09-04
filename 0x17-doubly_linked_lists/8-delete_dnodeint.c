#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given index
 * @head: a pointer to the head pointer
 * @index: the index to be deleted
 *
 * Return: 1 if successful, else, -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	if (!head)
		return (-1);

	current = *head;

	if (!current)
		return (-1);

	while (index != 0)
	{
		current = current->next;
		index -= 1;

		if (!current)
			return (-1);
	}

	if (current->prev)
		current->prev->next = current->next;
	else
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
	}

	return (1);
}
