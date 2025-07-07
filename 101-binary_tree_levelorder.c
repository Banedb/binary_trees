#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the ancestor node || NULL.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *ftemp, *stemp;

	if (!first || !second)
		return (NULL);

	for (ftemp = first; ftemp; ftemp = ftemp->parent)
		for (stemp = second; stemp; stemp = stemp->parent)
			if (ftemp == stemp)
				return ((binary_tree_t *)ftemp);
	return (NULL);
}
