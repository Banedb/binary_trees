#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root.
 * @node: Node to check.
 *
 * Return: 1 if root || 0 if not root.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	else
		return (1);
}
