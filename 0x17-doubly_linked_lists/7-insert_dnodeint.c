#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: a pointer to the head pointer
 * @idx: index of insertion
 * @n: data to be inserted
 *
 * Return: new node address or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (!h)
		return (NULL);

	current = *h;

	while (idx != 0)
	{
		current = current->next;
		idx -= 1;
		if (!current)
			return (NULL);
	}

	new->n = n;
	new->next = current;
	new->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = new;

	return (current);
}
