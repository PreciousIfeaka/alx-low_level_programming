#include "lists.h"

/**
 * get_nodeint_at_index - fetches the nth node of a list
 * @head: a pointer to the head node
 * @index: index of the node to be obtained
 *
 * Return: the nth node or NULL if it fails
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int x = 0, i = 0;


	h = head;

	while (head)
	{
		head = head->next;
		i++;
	}
	if (index > i)
		return (NULL);

	while (x < index)
	{
		h = h->next;
		x++;
	}
	if (!h)
		return (NULL);
	return (h);
}
