#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root of a binary tree
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is root
 *         0 if node is not root or node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
