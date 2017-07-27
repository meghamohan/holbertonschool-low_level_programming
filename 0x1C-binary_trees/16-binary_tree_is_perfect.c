#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "13-binary_tree_nodes.c"
#include "15-binary_tree_is_full.c"

/**
* binary_tree_is_perfect - checks if a binary tree is perfect,
* ie balanced and ends with leaves
* @tree: pointer to the root node of the tree to check
* Return: 1 if perfect 0 if not
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodeCount = 0;

	if (!tree)
		return (0);
	/**
	* for a binary tree to be perfect
	* it should be balanced and also
	* each node should have 2 leaves
	* and number of nodes should be odd
	* ie parent + child(even)
	*/
	nodeCount = binary_tree_nodes(tree);
	if (!tree->left && !tree->right)
		return (1);
	if ((nodeCount % 2) && !binary_tree_balance(tree) &&
		 binary_tree_is_full(tree))
		return (1);
	return (0);
}
