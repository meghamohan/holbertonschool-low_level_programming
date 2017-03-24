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
 * add_node - adds a new node to the beginning of linked list
 * @head: pointer to pointer of the first node of linked list
 * @str: string to be added to the node
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strLength(str);
	temp->next = *head;

	*head = temp;
	return (temp);
}
