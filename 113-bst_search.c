#include "binary_trees.h"

/**
 * bst_search - search for a value in bst.
 * @tree: pointer of node to search.
 * @value:  searched value.
 * Return: (pointer of node that contains value) otherwise (NULL).
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (tree->n == value)
		return ((bst_t *) tree);

	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
