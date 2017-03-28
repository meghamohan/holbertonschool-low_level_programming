#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the start of a list
 * @head: pointer to the linked list
 * @n: integer
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newHead = (listint_t *)malloc(sizeof(listint_t));

	if (newHead == NULL)
		return (NULL);
	newHead->n = (n);
	newHead->next = *head;
	*head = newHead;
	return (newHead);
}
