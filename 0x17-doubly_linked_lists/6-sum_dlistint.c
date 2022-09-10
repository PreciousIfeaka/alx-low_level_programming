#include "lists.h"

/**
 * sum_dlistint - sums the integer data in a dlist
 * @head: a pointer to the head node
 *
 * Return: the sum of integers
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}