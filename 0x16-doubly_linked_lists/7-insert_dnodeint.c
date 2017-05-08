#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at the
* given position idx
* @h: the pointer to head of the linkedlist
* @idx: index where the new node is tobe added
* @n: value of newnode
* Return: address of newly inserted node
**/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *newNode = NULL;
	unsigned int indx;

	if (!*h || !h)
		return (NULL);

	temp = *h;
	if (idx)
	{
		for (indx = 0 ; indx < idx - 1 && temp ; indx++)
			temp = temp->next;
	}
	if (idx > indx + 1)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (!idx)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}
	if (indx == idx)
	{
		newNode->prev = temp; newNode->next = NULL;
		temp->next = newNode;
		return (newNode);
	}
	newNode->prev = temp;
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
