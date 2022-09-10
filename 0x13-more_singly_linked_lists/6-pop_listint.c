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
	int i;

	h = *head;
	if (!head)
		return (0);
	*head = h->next;
	i = h->n;
	free(h);

	return (i);

	/* I realized that it was important to fix
	 * the node's data ina variable.
	 * This has been giving me seg error since
	 */
}
