#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of the node.
 * @tree: Pointer to tree
 * Return: depth of the node, (0) if NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
