#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: the list
 *
 * Return: a pointer to the first result's node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *newList, *temp;

	if (*head == NULL)
		return (NULL);

	temp = NULL;

	while (*head != NULL)
	{
		newList = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = newList;
	}

	(*head)->next = temp;

	return (*head);
}
