#include "binary_trees.h"
/**
 * binary_tree_size - Counts the size of a binary tree.
 * @tree: Root node of the tree to measure.
 *
 * Return: Number of nodes || 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}
