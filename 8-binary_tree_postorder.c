#include "binary_trees.h"
/**
 *binary_tree_postorder - traverses a tree in postorder manner
 *@func: function pointer tl perform operation on mode values
 *@tree: pointer to root node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
