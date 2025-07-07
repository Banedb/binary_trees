#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node || NULL.
 */
binary_tree_t *binary_tree_sibling(const binary_tree_t *node)
{
	if (!node || !node->parent ||
	    !node->parent->left || !node->parent->right)
		return (NULL);

	return (node->parent->left == node ?
		node->parent->right : node->parent->left);
}
