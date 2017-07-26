#include "binary_trees.h"
/**
* binary_tree_sibling - finds the sibling of a node
* @node: pointer to the node to find the sibling of
* Return: returns pointer to the sibling node, NULL if
* no siblings
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->parent)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		else if (node->parent->right == node)
			return (node->parent->left);
		else
			return (NULL);
	}
	return (NULL);
}
