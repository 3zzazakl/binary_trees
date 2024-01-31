#include "binary_trees.h"

/**
 * binary_trees_ancestor - getting lowest common ancestor for 2 nodes.
 * @first: pointer of first node.
 * @second: pointer of second node.
 * Return: (Pointer of lca) or (NULL).
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	binary_tree_t *anct1, *anct2;
	size_t depth1, depth2;

	if (first == NULL || second == NULL)
		return (NULL);

	anct1 = first;
	depth1 = binary_tree_depth(anct1);
	anct2 = second;
	depth2 = binary_tree_depth(anct2);

	while (depth1 > depth2)
	{
		anct1 = anct1->parent;
		depth1--;
	}

	while (depth2 > depth1)
	{
		anct2 = anct2->parent;
		depth2--;
	}

	while (anct1 != NULL && anct2 != NULL)
	{
		if (anct1 == anct2)
			return ((binary_tree_t *)anct1);

		anct1 = anct1->parent;
		anct2 = anct2->parent;
	}

	return (NULL);
}
