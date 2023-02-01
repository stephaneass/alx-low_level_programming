#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: the original list
 * @index: the index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int count = 0;

	if (copy == NULL)
		return (-1);

	if (idx == 0)
	{
		*head = *head->next;
		free(copy)
		return (1);
	}

	while (count < idx && copy != NULL)
	{
		copy = copy->next;
		count += 1;
	}

	if (count < idx)
		return (-1);
	else
	{
		temp = copy->next;
		copy->next = temp->next;
		free(temp);
	}

	return (1);
}
