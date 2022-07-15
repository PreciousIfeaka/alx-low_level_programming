#include "lists.h"

/**
 * add_node - add node to the begining  of the list_t list
 * @head: a pointer to head pointer
 * @str: a pointer to string variable
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t  **head, const char *str)
{
	unsigned int  len = 0;
	list_t *new;

	while (str[len] != '\0')
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
