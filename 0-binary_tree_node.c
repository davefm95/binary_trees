#include "binary_trees.h"
/**
 *binary_tree_node - creates a nrw binary tree node
 *@parent: pointer to parent node
 *@value: data to be in new node
 *Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	return (node);
}
