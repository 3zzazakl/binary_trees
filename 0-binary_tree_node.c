#include "binary_trees.h"

/**
 * binary_tree_node - creating a new binary tree node.
 * @parent: pointer to parent node.
 * @value: value exist in new node
 * Return: Pointer to new node or NUll.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
