#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the list
 * 
 * Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
    listint_t *temp;
    int data;

    if (*head == NULL)
        return (0);

    temp = *head;
    data = temp->n;
    free(temp);

    *head = (*head)->next;
    return (data);

}