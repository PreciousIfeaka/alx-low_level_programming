#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - a function that prints all the elements of a list
 * @h: a pointer to the head node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current;

	current = h;
	while (current)
	{
		printf("%i\n", current->n);
		current = current->next;
		nodes++;
	}
	return (nodes);
}
