#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: a pointer to the list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *present;

	present = head;
	while (present != NULL)
	{
		present = present->next;
		free(present);
	}
}
