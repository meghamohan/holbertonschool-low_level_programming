#include "sort.h"

/**
 * getNode - returns a node at a specified index
 * @list: list
 * @index: index
 * Return: returns a pointer to the node
 */
listint_t *getNode(listint_t **list, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	tmp = *list;
	for (i = 0; tmp && i != index; i++)
	{
		tmp = tmp->next;
	}
	return (tmp);
}

/**
 * myListLen - returns length of a linked list
 * @list: head of linkedlist
 * Return: Returns length of linked list
 */
unsigned int myListLen(listint_t **list)
{
	listint_t *temp;
	unsigned int i;

	temp = *list;
	i = 0;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

/**
 * insertion_sort_list - sorts linkedlist using insertiong sort algo
 * @list: head of list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp1, *currNode, *prevNode;
	unsigned int i, j;

	if (!list || !(*list))
		return;
	if (myListLen(list) < 2)
		return;
	for (i = 1; i < myListLen(list); i++)
	{
		currNode = getNode(list, i);
		prevNode = currNode->prev;
		for (j = 0; j < i; j++)
		{
			if (prevNode->n > currNode->n)
			{
				temp1 = prevNode->prev;
				prevNode->prev = currNode;
				prevNode->next = currNode->next;
				currNode->prev = temp1;
				currNode->next = prevNode;
				if (temp1)
					temp1->next = currNode;
				else
					*list = currNode;
				if (prevNode->next)
					prevNode->next->prev = prevNode;
				prevNode = currNode->prev;
				print_list(*list);
			}
			else
				break;
		}
	}
}
