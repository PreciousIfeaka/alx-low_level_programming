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
	list_t *secnd;

	present = head;
	while (present != NULL)
	{
		secnd = present->next;
		free(present->str);
		free(present);
		present = secnd;
	}
}
