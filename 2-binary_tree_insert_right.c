#include "binary_trees.h"
/**
 *binary_tree_insert_right - creates inserts it as right child to paret node
 *@parent: pointer to parent node
 *@value: data to be in new node
 *Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->parent = parent;
	node->right = parent->right;
	parent->right = node;
	if (node->right)
		node->right->parent = node;
	return (node);
}
