#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: pointer to parent node
* @value: value to be added in the new node
* Return: returns address of new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *temp;

	if (!parent)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	temp = parent;
	if (!parent->right)
		parent->right = newNode;
	else
	{
		newNode->right = temp->right;
		temp->right->parent = newNode;
		temp->right = newNode;
	}
	return (newNode);
}
