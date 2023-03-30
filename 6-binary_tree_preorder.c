#include "binary_trees.h"
/**
 *binary_tree_preorder - traverses a tree in preorder manner
 *@func: function pointer tl perform operation on mode values
 *@tree: pointer to root node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left);
	binary_tree_preorder(tree->right);
}
