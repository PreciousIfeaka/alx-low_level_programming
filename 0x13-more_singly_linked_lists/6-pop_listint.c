#include "lists.h"

/**
 * pop_listint - pops the head node of a list
 * @head: a pointer to the head pointer
 *
 * Return: the head node data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int i; /* had to fix the node data in this to prevent seg fault */

	h = *head;
	if (head == NULL)
		return (0);
	*head = h->next;
	i = h->n;
	free(h);

	return (i);
}
