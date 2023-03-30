#include "binary_trees.h"
/**
 *binary_tree_balance - calculates balance factor of tree
 *@tree: pointer to node
 *Return: balance factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (!tree)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return (lh - rh);
}
