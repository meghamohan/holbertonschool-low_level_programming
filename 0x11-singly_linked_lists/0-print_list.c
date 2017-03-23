#include "lists.h"

/**
 * print_list - counts number of elements in the linked list
 * @h: pointer to linked list
 * Return: count
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0 ; h != NULL ; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
