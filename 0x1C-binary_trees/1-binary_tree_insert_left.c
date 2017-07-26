#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: parent node
* @value: value of the node
* Return: pointer to the node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode, *temp;

	temp = parent;
	if (!temp)
		return (NULL);
	leftNode = malloc(sizeof(binary_tree_t));
	if (!leftNode)
		return (NULL);
	leftNode->parent = temp;
	leftNode->n = value;
	leftNode->left = NULL;
	leftNode->right = NULL;
	if (!temp->left)
		temp->left = leftNode;
	else
	{
		leftNode->left = temp->left;
		temp->left->parent = leftNode;
		temp->left = leftNode;
	}
	return (leftNode);
}
