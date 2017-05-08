#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at the
*  given position 
* @head: head node of the linkedlist
* @index: index to delete node
* Return: 1 if succesful,-1 if failed
**/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tempNode, *bufferNode;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	tempNode = *head;
	if (index == 0)
	{
		*head = tempNode->next;
		free(tempNode);
		return (1);
	}
	while (count != (index - 1))
	{
		if (tempNode == NULL)
			return (-1);
		tempNode = tempNode->next;
		count++;
	}
	if (tempNode == NULL)
		return (-1);
	bufferNode = tempNode->next;
	tempNode->next = bufferNode->next;
	free(bufferNode);
	return (1);
}
