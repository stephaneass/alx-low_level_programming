#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: the original list
 * @n: the data
 *
 * Return: the address or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof (listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return temp;
}
