#include "lists.h"

/**
 * reverse_listint - reverses a limkedlist
 *
 * @head: pointer to head of a linkedlist
 * Return: Returns a pointer to the new head pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previousNode, *nextNode;

	previousNode = 0;
	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = previousNode;
		previousNode = (*head);
		(*head) = nextNode;
	}
	(*head) = previousNode;
	return (*head);
}
