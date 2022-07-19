#include "lists.h"

/**
 * add_nodeint - adds node to the begining of a list
 * @head: a pointer to the head pointer
 * @n: the integer to be added
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *) malloc(sizeof(listint_t));
	if (!*head)
	{
		free(newNode);
		return (NULL);
	}
	if (*head)
	{
		*head = NULL;

		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
