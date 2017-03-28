#include "lists.h"

/**
 * listint_len - function that returns no: of elements of a linkedlist
 * @h: pointer to linked list
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
