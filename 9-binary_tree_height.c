#include "binary_trees.h"

/**
 * bt_height_recursive - Measures the height of a binary tree.
 * @tree: Root node of the tree to measure.
 * @height: height of tree or sub-tree.
 *
 * Return: height of the tree || 0 if tree is NULL.
 */

size_t bt_height_recursive(const binary_tree_t *tree, size_t height)
{
	size_t lh = height, rh = height;

	if (!tree)
		return (0);

	if (tree->left)
		lh = bt_height_recursive(tree->left, ++lh);
	if (tree->right)
		rh = bt_height_recursive(tree->right, ++rh);

	if (lh > rh)
		return (lh);
	else
		return (rh);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Root node of the tree to traverse.
 *
 * Return: height of the tree || 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height = 0;

	if (tree)
		height = bt_height_recursive(tree, height);

	return (height);
}
