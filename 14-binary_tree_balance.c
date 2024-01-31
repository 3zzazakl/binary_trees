#include "binary_trees.h"

/**
 * binary_tree_balance - calculate measure balance of tree.
 * @tree: Pointer of tree.
 * Return: (Balance Factor), or (0) if NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
