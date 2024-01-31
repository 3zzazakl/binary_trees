#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is leaf or not.
 * @node: pointer to node
 * Return: (1) if leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
