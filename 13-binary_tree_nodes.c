#include "binary_trees.h"
/**
 *binary_tree_nodes - counts number of nodes in a tree/subtree
 *@tree: pointer to node
 *Return: num nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t rs, ls;

	if (!tree)
		return (0);
	if (tree && (!tree->left && !tree->right))
		return (0);
	ls = binary_tree_nodes(tree->left);
	rs = binary_tree_nodes(tree->right);
	return (1 + ls + rs);
}
