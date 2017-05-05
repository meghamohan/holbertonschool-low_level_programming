#include "lists.h"

/**
* add_dnodeint - function to add a new node to the
* end of the linkedlist dlistint_t
* @head: pointer to head node of the linkedlist
* n: value of n to be added to the node
* Return: returns address of the new element, or NULL if it failed
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	(*head)->prev = newNode;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
