#include "lists.h"

/**
* print_dlistint - prints all the elements in a linked list
* @h: pointer to the head of the linked list
* Return: number of nodes in the list
**/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
