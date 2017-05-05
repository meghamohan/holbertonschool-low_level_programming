#include "lists.h"

/**
* dlistint_len - prints the number of nodes in the linkedlist
* @h: pointer to the head of the linkedlist
* Return: the number of nodes
**/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
