#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Parent node
 * @value: Value of new node
 *
 * Return: Pointer to the new node || NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (!parent || !value)
		return (NULL);

	if (parent->left)
	{
		temp = parent->left;
		parent->left = binary_tree_node(parent, value);
		temp->parent = parent->left;
		parent->left->left = temp;
	}
	else
		parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
