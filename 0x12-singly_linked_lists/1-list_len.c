#include "lists.h"

/**
 * list_len - a function that prints the number of elements in a list.
 * @h: a pointer to the list_t list
 *
 * Return: the number of elements in a list
 */

size_t list_len(const list_t *h)
{
	unsigned int element = 0;

	while (h != NULL)
	{
		h = h->next;
		element++;
	}
	return (element);
}
