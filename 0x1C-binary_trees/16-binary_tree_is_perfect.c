#include "binary_trees.h"
#include "14-binary_tree_balance.c"
/**
* binary_tree_is_perfect - checks if a binary tree is perfect,
* ie balanced and ends with leaves
* @tree: pointer to the root node of the tree to check
* Return: 1 if perfect 0 if not
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	/**
	* for a binary tree to be perfect
	* it should be balanced and also
	* each node should have 2 leaves
	ie call the functions balance and perfect
	*/
	if (!tree->left && !tree->right)
		return (1);
	if (!binary_tree_balance(tree))
		return (0);
	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	return (1);
}
