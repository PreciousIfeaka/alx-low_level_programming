#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at a given index
 * @head: a pointer to the head node pointer
 * @idx: the given index to be inserted
 * @n: the integer to be inserted
 *
 * Return: the address of the new node, NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *newnode, *prev, *current;
	unsigned int x = 0, i = 0;

	h = *head;
	current = *head;

	if (*head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (!idx)
	{
		newnode->next = h;
		*head = newnode;
		return (newnode);
	}
	while (i != idx)
	{
		if (!current || !(current->next))
			return (NULL);

		current = current->next;
		i++;
	}
	if (idx > i)
		return (NULL);

	while (x < idx)
	{
		prev = h;
		h = h->next;
		x++;
	}
	newnode->next = h;
	prev->next = newnode;
	return (newnode);
}
