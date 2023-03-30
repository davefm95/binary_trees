#include "binary_trees.h"
/**
 *binary_tree_is_root - checks if a node is a root
 *@node: node to be checked
 *Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
