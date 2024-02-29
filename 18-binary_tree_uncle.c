#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node
 *         NULL if node is NULL or node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node->parent == NULL || node->parent->parent == NULL || node == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left
		&& node->parent->parent->right != NULL)
		return (node->parent->parent->right);
	else if (node->parent == node->parent->parent->right
		&& node->parent->parent->left != NULL)
		return (node->parent->parent->left);
	else
		return (NULL);
}
