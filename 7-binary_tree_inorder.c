#include "binary_trees.h"

/**
 * binary_tree_inorder - using in-order
 * @tree: Pointer to tree.
 * @func: pointer to function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
