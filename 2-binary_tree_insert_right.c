#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as right-child of another node.
 * @parent: Parent node
 * @value: Value of new node
 *
 * Return: Pointer to the new node || NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (!parent || !value)
		return (NULL);

	if (parent->right)
	{
		temp = parent->right;
		parent->right = binary_tree_node(parent, value);
		temp->parent = parent->right;
		parent->right->right = temp;
	}
	else
		parent->right = binary_tree_node(parent, value);

	return (parent->right);
}
