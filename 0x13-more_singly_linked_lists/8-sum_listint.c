#include "lists.h"

/**
 * sum_listint - sums the integers of a list
 * @head: pointer to the head node
 *
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
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
