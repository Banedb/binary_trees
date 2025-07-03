#include "binary_trees.h"
/**
 * bt_nodes_recursive - Counts the number of nodes of a binary tree.
 * @tree: Root node of the tree to be counted.
 * @nodes: number of nodes of tree or sub-tree.
 */

void bt_nodes_recursive(const binary_tree_t *tree, size_t *nodes)
{
	if (!tree)
		return;

	bt_nodes_recursive(tree->left, nodes);
	bt_nodes_recursive(tree->right, nodes);
	if (tree->left || tree->right)
		(*nodes)++;
}


/**
 * binary_tree_nodes - Counts the nodes of a binary tree.
 * @tree: Root node of the tree to be counted.
 *
 * Return: Number of nodes || 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
		bt_nodes_recursive(tree, &nodes);

	return (nodes);
}
