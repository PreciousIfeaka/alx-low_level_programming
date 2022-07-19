#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a list
 * @h: a pointer to the list head
 *
 * Return: the number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current;

	current = h;
	while (current)
	{
		current = current->next;
		nodes++;
	}
	return (nodes);
}

