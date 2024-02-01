#include "binary_trees.h"

/**
 * binary_tree_is_avl - check if bst is an AvL or not.
 * @tree: Pointer of node.
 * Return: (1) if valid AVL otherwise (0).
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!binary_tree_is_bst(tree))
		return (0);

	if (labs(binary_tree_height(tree->left) - binary_tree_height(tree->right)) > 1)
		return (0);

	if (!binary_tree_is_avl(tree->left) || !binary_tree_is_avl(tree->right))
		return (0);

	return (1);
}

/**
 * binary_tree_height - getting height of tree.
 * @tree: pointer to tree
 * Return: height of tree, or 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

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





