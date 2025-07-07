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

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the ancestor node || NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t fdepth, sdepth;

	if (!first || !second)
		return (NULL);

	fdepth = binary_tree_depth(first);
	sdepth = binary_tree_depth(second);

	for (; fdepth > sdepth; fdepth--)
		first = first->parent;

	for (; fdepth < sdepth; sdepth--)
		second = second->parent;

	for (; first && second; first = first->parent, second = second->parent)
		if (first == second)
			return ((binary_tree_t *)first);

	return (NULL);
}
