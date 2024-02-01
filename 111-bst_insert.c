#include "binary_trees.h"
/**
 * bst_insert - insert value in bst.
 * @tree: pointer of node in bst.
 * @value: inserted value.
 * Return: (Pointer of node to be inserted).
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new = binary_tree_node(NULL, value), *current;

	if (tree == NULL || new == NULL)
		return (NULL);
	if (*tree == NULL)
		return (*tree = new);

	current = *tree;
	while (1)
	{
		if (value < current->n)
		{
			if (current->left != NULL)
				current = current->left;
			else
			{
				current->left = new;
				new->parent = current;
				break;
			}
		}
		else if (value > current->n)
		{
			if (current->right != NULL)
				current = current->right;
			else
			{
				current->right = new;
				new->parent = current;
				break;
			}
		}
		else
		{
			free(new);
			return (NULL);
		}
	}
	return (new);
}
