#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Root node of the tree to traverse.
 *
 * Return: height of the tree || 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lh = 1 + binary_tree_height(tree->left);
	if (tree->right)
		rh = 1 + binary_tree_height(tree->right);

	return (lh > rh ? lh : rh);
}
