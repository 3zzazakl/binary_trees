#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node at left
 * @parent: pointer to node to insert left.
 * @value: value exist in node.
 * Return: Pointer to new node, or NULL for failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node = binary_tree_node(parent->left, value);
		if (new_node == NULL)
			return (NULL);

		parent->left->parent = new_node;
		new_node->left = parent->left;
		parent->left = new_node;
	}
	else
	{
		new_node = binary_tree_node(parent, value);
		if (new_node == NULL)
			return (NULL);
		parent->left = new_node;
	}
	return (new_node);
}
