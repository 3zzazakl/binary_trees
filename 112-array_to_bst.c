#include "binary_trees.h"

/**
 * array_to_bst - creating a bst from binary.
 * @array: Pointer to fst item in array.
 * @size: length of array.
 * Return: (pointer of node) otherwise NULL.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	if (array == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		if (bst_insert(&root, array[i]) == NULL)
			continue;
	}
	return (root);
}
