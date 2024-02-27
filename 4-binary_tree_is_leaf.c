#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node in a binary tree is a leaf
 * @node: Pointer to node to check
 *
 * Return: 1 if node is leaf
 *         0 if node is not leaf or is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
