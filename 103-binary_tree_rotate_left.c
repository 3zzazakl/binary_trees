#include "binary_trees.h"

/**
 * binary_tree_rotate_left - left rotation on bt.
 * @tree: pointer of tree.
 * Return: pointer of new root.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new = NULL;

	if (tree == NULL ||  tree->right == NULL)
		return (tree);

	new = tree->right;
	tree->right = new->left;

	if (new->left != NULL)
		new->left->parent = tree;

	new->left = tree;
	new->parent = tree->parent;
	tree->parent = new;

	return (new);
}
