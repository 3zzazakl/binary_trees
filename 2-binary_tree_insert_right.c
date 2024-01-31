#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at right
 * @parent: pointer to node to insert left.
 * @value: value exist in node.
 * Return: Pointer to new node, or NULL for failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);

}
