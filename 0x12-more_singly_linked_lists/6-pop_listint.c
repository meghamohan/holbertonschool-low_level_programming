#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data (n).
 * @head: pointer to linked list
 * Return: head node's data(n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int retValue;

	if (*head == NULL)
		return (0);
	temp = *head;
	retValue = temp->n;
	*head = temp->next;
	free(temp);

	return (retValue);
}
