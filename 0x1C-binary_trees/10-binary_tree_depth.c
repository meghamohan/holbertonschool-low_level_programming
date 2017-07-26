#include "binary_trees.h"
/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @node: pointer to the node to measure the depth of
* Return: depth of a node in a tree; if node is NULL,
*  your function must return 0
*/
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	depth = 0;
	if (!node)
		return (0);
	while (node->parent)
	{
		node = node->parent;
		depth++;
	}
	return (depth);
}
