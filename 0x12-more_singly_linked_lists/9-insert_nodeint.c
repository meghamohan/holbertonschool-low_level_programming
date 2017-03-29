#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position in
 * a linkedlist,listint_t
 * @head: head of linkedlist
 * @idx: index at which node should be added
 * @n: value to add to the new node
 * Return: returns new node address, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tempNode;
	unsigned int count = 1;

	if (*head == NULL && head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	tempNode = *head;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (count != idx)
	{
		tempNode = tempNode->next;
		if (tempNode == NULL)
		{
			free(newNode);
			return (NULL);
		}
		count++;
	}
	newNode->next = tempNode->next;
	tempNode->next = newNode;
	newNode->n = n;
	return (newNode);
}
