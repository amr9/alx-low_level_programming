#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * Return: The data from node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;

	if (head != NULL && *head != NULL)
	{
		listint_t *temp = *head;

		data = temp->n;

		*head = (*head)->next;

		free(temp);
	}

	return (data);
}

