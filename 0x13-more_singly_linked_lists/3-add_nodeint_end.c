#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning
 * @head: the original list
 * @n: the data
 *
 * Return: the address or NULL if it failed
 */
stint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof (listint_t));

	if (temp == NULL)
		return (NULL);

	while (*head != NULL)
	{
		if (*head->next != NULL)
		{
			*head = *head->next;
		}
		else
		{
			*head->next = temp;
			break;
		}
	}

	return (temp);
}
