#include "lists.h"

/**
 * sum_listint - returns the sum of all nodes in a listint_t struct
 *
 * @head: head for listint_t struct
 * Return: returns the sum of all data, or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
