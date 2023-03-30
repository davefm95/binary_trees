#include "binary_trees.h"
/**
 *binary_tree_size - counts number of nodes in a tree/subtree
 *@tree: pointer to node
 *Return: size of tree/subtree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t rs, ls;

	if (!tree)
		return (0);
	ls = binary_tree_size(tree->left);
	rs = binary_tree_size(tree->right);
	return (1 + ls + rs);
}
