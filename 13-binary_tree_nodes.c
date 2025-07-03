#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes of a binary tree.
 * @tree: Root node of the tree to be counted.
 *
 * Return: Number of nodes || 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	return (0);
}
