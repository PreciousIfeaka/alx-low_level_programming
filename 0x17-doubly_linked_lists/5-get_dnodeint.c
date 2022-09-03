#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a given index
 * @head: a pointer to the head node
 * @index: the node index to be obtained
 *
 * Return: the node of given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	
	while (i < index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (0);
	return (head);
}
