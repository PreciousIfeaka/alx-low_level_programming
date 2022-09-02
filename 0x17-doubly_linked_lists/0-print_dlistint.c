#include "lists.h"

/**
 * print_dlistint - prints elements in a d linked list
 * @h: a pointer to the list_t list
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
