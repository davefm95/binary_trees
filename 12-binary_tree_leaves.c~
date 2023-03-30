#include "binary_trees.h"
/**
 *binary_tree_leaves - counts number of leaves in a tree/subtree
 *@tree: pointer to node
 *Return: num leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t rs, ls;

	if (!tree)
		return (0);
	ls = binary_tree_leaves(tree->left);
	rs = binary_tree_leaves(tree->right);
	if (tree && (!tree->left && !tree->right))
		return (1 + ls + rs);
}
