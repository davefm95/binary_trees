#include "binary_trees.h"
/**
 *binary_tree_depth - calculates depth of binary trer
 *@tree: pointer to root node
 *Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || !tree->parent)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (++depth);
}
