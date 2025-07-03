#include "binary_trees.h"
/**
 * bt_leaves_recursive - Counts the number of leaves of a binary tree.
 * @tree: Root node of the tree to be counted.
 * @leaves: number of leaves of tree or sub-tree.
 */

void bt_leaves_recursive(const binary_tree_t *tree, size_t *leaves)
{
	if (!tree)
		return;

	bt_leaves_recursive(tree->left, leaves);
	bt_leaves_recursive(tree->right, leaves);
	if (!tree->left && !tree->right)
		(*leaves)++;
}


/**
 * binary_tree_leaves - Counts the leaves of a binary tree.
 * @tree: Root node of the tree to be counted.
 *
 * Return: Number of nodes || 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
		bt_leaves_recursive(tree, &leaves);

	return (leaves);
}
