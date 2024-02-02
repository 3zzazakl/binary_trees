#include "binary_trees.h"

/**
 * bst_remove - remove node from bt.
 * @root: pointer of node
 * @value: removed value.
 * Return: Pointer of root after removed.
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp, *success;

	if (root == NULL)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left == NULL)
		{
			temp = root->right;
			free(root);
			return (temp);
		}
		else if (root->right == NULL)
		{
			temp = root->left;
			free(root);
			return (temp);
		}
		success = root->right;
		while (success->left != NULL)
			success = success->left;
		root->n = success->n;
		root->right = bst_remove(root->right, success->n);
		free(root);
	}
	return (root);
}

