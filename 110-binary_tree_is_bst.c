#include "binary_trees.h"

/**
 * binary_tree_is_bst - check if bt is valid a bst.
 * @tree: pointer of tree.
 * Return: (1) if valid, otherwise (0).
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst(tree, INT_MIN, INT_MAX));
}

/**
 * is_bst - recursive function to check bt.
 * @tree: pointer of current node.
 * @min: min value in node.
 * @max: max value in node.
 * Return: (1) if valid, otherwise (0).
 */
int is_bst(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (is_bst(tree->left, min, tree->n - 1) &&
			is_bst(tree->right, tree->n + 1, max));
}
