#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the list
 *
 * Return: anything
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while(head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

