#include "lists.h"

/**
 * print_dlistint - print doubl-linked lists
 * @h: & of head node
 *
 * Return: size of lists
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
