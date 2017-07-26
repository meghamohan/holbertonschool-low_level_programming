#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
* binary_tree_balance - function that measures the
*  balance factor of a binary tree
* @tree: pointer to the root node of the tree
* Return: returns the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftFactor, rightFactor;

	if (!tree)
		return (0);
	/**
	* if tree weights more to the left, positive
	* if it weighs more to the right, return negative
	* if both eighs equal returns 0
	*/
	leftFactor = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	rightFactor = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	return (leftFactor - rightFactor);
}
