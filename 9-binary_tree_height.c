#include "binary_trees.h"
/**
 *binary_tree_height - calculates height of binary trer
 *@tree: pointer to root node
 *Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL || (!tree->left && !tree->right))
	{
		return (0);
	}
	else
	{
		lh = binary_tree_height(tree->left);
		rh = binary_tree_height(tree->right);
		if (lh > rh)
			return (lh + 1);
		else
			return (rh + 1);
	}
}
