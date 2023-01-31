#include "lists.h"

/*
 * print_listint -  prints all the elements of a listint_t list
 * @h: the listint_t list argement passed
 * 
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while  (temp != NULL)
    	{
        	printf("%d\n", temp->n);
	        /*if (temp->next != NULL)*/
        	temp = temp->next;
	        count++;
	}

	return (count);
}
