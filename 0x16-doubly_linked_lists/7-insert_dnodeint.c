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
	dlistint_t *temp, *newNode;
	unsigned int indx;

	if (*h == NULL)
		return (NULL);

	temp = *h;
	if (idx)
	{
		for (indx = 0 ; indx < idx - 1 && temp ; indx++)
			temp = temp->next;
	}
	if (idx >= indx)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL; newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *h;
		*h = newNode;
		return (newNode);
	}
	if (indx == idx)
	{
		newNode->prev = temp;
		newNode->next = temp->next;
		temp->next = newNode;
		return (newNode);
	}
	newNode->prev = temp;
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
