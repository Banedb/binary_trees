#include "binary_trees.h"

/**
 * binary_tree_levelorder - Traverses a binary tree post-orderly.
 * @tree: Root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return (NULL);

	func(tree->n);
	func(tree->left->n);
	func(tree->right->n);
}
