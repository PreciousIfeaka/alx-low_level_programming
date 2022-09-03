#include "lists.h"

/**
 * add_dnodeint - adds node at thr beginning of a dlistint_t list
 * @head: a pointer to the head node pointer
 * @n: the integer to be added
 *
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
