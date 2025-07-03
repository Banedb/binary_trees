#include "binary_trees.h"

/**
 * height - Calculates height of a binary tree.
 * @tree: Root node of the tree.
 *
 * Return: Height of the tree || 0 if tree is NULL.
 */

size_t height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (!tree)
		return (0);

	lh = height(tree->left);
	rh = height(tree->right);

	return (1 + (lh > rh ? lh : rh));
}

/**
 * binary_tree_balance - Measures the balance of a binary tree.
 * @tree: Root node of the tree to traverse.
 *
 * Return: balance of the tree || 0 if tree is NULL.
 */
size_t binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree->left) - height(tree->right));
}
