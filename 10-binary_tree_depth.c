#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: Root node of the tree to measure.
 *
 * Return: Depth || 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current;
	int depth = 0;

	if (!tree)
		return (0);

	for (current = tree; current->parent; current = current->parent)
		depth++;

	return (depth);
}
