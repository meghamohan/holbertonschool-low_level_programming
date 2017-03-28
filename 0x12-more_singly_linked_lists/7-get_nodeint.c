#include "lists.h"

/**
 * get_nodeint_at_index - returns data for nth node
 * in a linkedlist,listint_t
 * @head: head for listint_t struct
 * @index: index of a specified node
 * Return: returns data of nth node, or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (count != index)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		count++;
	}
	return (temp);
}
