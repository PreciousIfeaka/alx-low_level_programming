#include "lists.h"

/**
 * add_dnodeint_end - adds node to the end of a dlist
 * @head: a pointer to the head node pointer
 * @n: the node value
 *
 * Return: the address of the new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
		new->prev = last;
	}
	return (new);
}
