#include "binary_trees.h"
/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height of
* Return: returns the size of the tree, tree if is NULL,
*  your function must return 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (0);

	right = binary_tree_height(tree->right) + 1;
	left = binary_tree_height(tree->left) + 1;

	return (right > left ? right : left);
}
