#include "lists.h"

/**
 * strLength - return the length of a string
 * @s : pointer to string
 *
 *Return: string length
 */

int strLength(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}
/**
 * add_node_end - adds a new node to the end of linked list
 * @head: pointer to pointer of the first node of linked list
 * @str: string to be added to the end of node
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strLength(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	else
	{
		list_t *trace = (list_t *)malloc(sizeof(list_t));

		if (trace == NULL)
		{
			return (NULL);
		}
		trace = *head;
		while (trace->next != NULL)
		{
			trace = trace->next;
		}
		trace->next = temp;
	}
	return (temp);
}
