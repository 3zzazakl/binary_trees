#include "binary_trees.h"

/**
 * binary_tree_levelorder - using level-order traversal in bt.
 * @tree: Pointer of tree.
 * @func: Pointer to fuction to call node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int front = 0, roar = 0;

	if (tree == NULL || func == NULL)
		return;

	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);

	queue[roar++] = (binary_tree_t *)tree;

	while (front < roar)
	{
		binary_tree_t *node = queue[front++];

		func(node->n);

		if (node->left != NULL)
			queue[roar++] = node->left;

		if (node->right != NULL)
			queue[roar++] = node->right;
	}
	free(queue);
}
