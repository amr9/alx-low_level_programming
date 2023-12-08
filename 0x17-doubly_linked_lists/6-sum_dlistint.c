#include "lists.h"

/**
 * sum_dlistint - sums the values of a dlist
 * @head: point to current head node
 * Return: sum of values
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
