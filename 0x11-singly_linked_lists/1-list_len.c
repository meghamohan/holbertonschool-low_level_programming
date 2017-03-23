#include "lists.h"

/**
 * list_len - lists number of elements in the linked list
 * @h: pointer to linked list
 * Return: count
 */
size_t list_len(const list_t *h)
{
	int length;

	for (length = 0 ; h != NULL ; length++)
	{
		h = h->next;
	}
	return (length);
}
