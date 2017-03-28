#include "lists.h"

/**
 * free_listint - function that free linked list
 * @head: pointer to linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
