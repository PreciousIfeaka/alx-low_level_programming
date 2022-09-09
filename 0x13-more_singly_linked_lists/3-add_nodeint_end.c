#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of a list
 * @head: a pointer to the head pointer
 * @n: the data to be added
 *
 * Return: new element address if successful, else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *h;

	h = *head;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = newnode;

	return (newnode);
}
