#include "binary_trees.h"
/**
* binary_tree_uncle - finds the uncle of a node
* .-------(098)-------.
*   .--(012)--.         .--(128)-------.
* (010)     (054)     (110)       .--(402)--.
*
* in the above tree , for (010), the uncle node will be (128)
* @node: pointer to the node to find the uncle of
* Return: returns a pointer to the uncle node, if no uncle
* return NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *myParent;

	myParent = node->parent;
	if (!node || !myParent)
		return (NULL);
	/**
	* if grandparents left node is node the parent node
	* then that wou;d be the uncle
	* if grandparents right node is node the parent node
	* then that node will be uncle node
	* else there is no uncle node
	*/
	if (myParent->parent)
	{
		if (myParent->parent->left != myParent)
			return (myParent->parent->left);
		else if (myParent->parent->right != myParent)
			return (myParent->parent->right);
	}
	return (NULL);
}
