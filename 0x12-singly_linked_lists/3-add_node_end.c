#include "lists.h"
#include <string.h>
#include <stddef.h>

/**
 * add_node_end - a function that adds a node to the end of a list
 * @head: a pointer to the head node of list_t list
 * @str: a pointer to the string to be added
 *
 * Return: the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;
	unsigned int i;

	if (!head)
		return (NULL);
	while (str[i])
		i++;

	newNode = malloc(sizeof(list_t));

	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}
	return (*head);
}
