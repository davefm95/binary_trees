#include "binary_trees.h"
/**
 *binary_tree_height - calculates height of binary trer
 *@tree: pointer to root node
 *Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;
	if (tree == NULL)
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
