#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at position in list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added.
 * @n: The integer value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}

	while (current != NULL && idx > 1)
	{
		current = current->next;
		idx--;
	}

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

