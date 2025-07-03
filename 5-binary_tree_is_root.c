#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root.
 * @tree: Node to check.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	else
		return (1);
}
