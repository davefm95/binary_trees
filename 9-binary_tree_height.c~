#include "binary_trees.h"
/**
 *binary_tree_height - calculates height of binary trer
 *@tree: pointer to root node
 *Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lh, rh;
	if (!tree)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return ((lh > rh) ? lh + 1 : rh + 1);
}
