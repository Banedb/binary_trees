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
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Root node of the tree to traverse.
 *
 * Return: balance of the tree || 0 if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (height(tree->left) != height(tree->right))
		return (0);

	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	return (0);
}
