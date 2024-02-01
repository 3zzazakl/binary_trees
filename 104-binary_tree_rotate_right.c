#include "binary_trees.h"

/**
 * binary_tree_rotate_right - right rotation on bt.
 * @tree: pointer of tree.
 * Return: pointer of new root.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new = NULL;

	if (tree == NULL ||  tree->left == NULL)
		return (tree);

	new = tree->left;
	tree->left = new->right;

	if (new->right != NULL)
		new->right->parent = tree;

	new->right = tree;
	new->parent = tree->parent;
	tree->parent = new;

	return (new);
}
