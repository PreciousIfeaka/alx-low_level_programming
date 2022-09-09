#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: a pointer to the head node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *front, *current;

	current = *head;
	
	if (!current)
		return;

	while (current)
	{
		front = current->next;
		free(current);
		current = front;
	}
	*head = NULL;
}
