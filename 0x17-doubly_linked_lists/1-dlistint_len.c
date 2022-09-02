#include "lists.h"

/**
 * dlistint_len - computes the length of a linked list
 * @h: a pointer to the head node
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
