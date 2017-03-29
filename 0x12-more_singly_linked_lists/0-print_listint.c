#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to linked list
 * Return: number of elements in the linkedlist
 */

size_t print_listint(const listint_t *h)
{
	unsigned int n;

	n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
