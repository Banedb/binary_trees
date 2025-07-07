#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node || NULL.
 */
binary_tree_t *binary_tree_uncle(const binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent ||
	    !node->parent->parent->left || !node->parent->parent->right)
		return (NULL);

	return (node->parent->parent->left == node->parent ?
		node->parent->parent->right : node->parent->parent->left);
}
