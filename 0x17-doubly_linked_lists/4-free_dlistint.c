#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: a pointer to the head node
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *buffer;

	while (head != NULL)
	{
		buffer = head;
		head = head->next;
		free(buffer);
	}
}
