#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a given node is a leaf.
 * @node: Node to check.
 *
 * Return: 1 if leaf || 0 if not leaf.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	else
		return (1);
}
