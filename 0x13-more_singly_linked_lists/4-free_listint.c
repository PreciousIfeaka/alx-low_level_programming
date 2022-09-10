#include "lists.h"

/**
 * free_listint - frees a list
 * @head: a pointer to the head node
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current, *nxt;

	if (!head)
		return;
	while (head)
	{
		current = head;
		nxt = head->next;
		head = nxt;
		free(current);
	}
}
