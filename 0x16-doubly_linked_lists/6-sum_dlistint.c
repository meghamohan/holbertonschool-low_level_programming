#include "lists.h"

/**
* sum_dlistint - returns the sum of all the nodes in 
* the linkedlist slistint_t
* @head: pointer to head of the linkedlist
* Return: returns the sum of all the nodes
**/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	sum = 0;
	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
