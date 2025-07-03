#include "binary_trees.h"
/**
 * bt_size_recursive - Counts the number of nodes (size) of a binary tree.
 * @tree: Root node of the tree to measure.
 * @size: number of nodes of tree or sub-tree.
 */

void bt_size_recursive(const binary_tree_t *tree, size_t *size)
{
	if (!tree)
		return;

	if (tree->left)
	{
		++*size;
		bt_size_recursive(tree->left, size);
	}
	if (tree->right)
	{
		++*size;
		bt_size_recursive(tree->right, size);
	}
}


/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Root node of the tree to measure.
 *
 * Return: Number of nodes || 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size++;
		bt_size_recursive(tree, &size);
	}

	return (size);
}
