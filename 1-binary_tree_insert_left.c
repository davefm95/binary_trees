#include "binary_trees.h"
/**
 *binary_tree_insert_left - creates and inserts it as left child to parent node
 *@parent: pointer to parent node
 *@value: data to be in new node
 *Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->right = NULL;
	node->parent = parent;
	node->left = parent->left;
	parent->left = node;
	if (node->left)
		node->left->parent = node;
	return (node);
}
