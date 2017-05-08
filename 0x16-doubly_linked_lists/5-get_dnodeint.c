#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of
* a linkedlist
* @head: the pointer to head of a linkedlist
* @index: index of the node to be returned
* Return: retruns the node in the index position
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp;

	count = 0;
	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == count)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
