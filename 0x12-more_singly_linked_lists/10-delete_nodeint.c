#include "lists.h"

/**
 * delete_nodeint_at_index : deletes the node at the given position
 * @head: head node of the linkedlist
 * @index: index to delete node
 * Return: 1 if succesful,-1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempNode, *bufferNode;
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
		tempNode = tempNode->next;
		count++;
	}
	if (tempNode == NULL)
		return (-1);
	bufferNode = tempNode->next->next;
	tempNode->next = bufferNode;
	return (1);

}
