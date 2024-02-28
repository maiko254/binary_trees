#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a binary tree
 * @tree: Pointer to root node of the tree to measure
 *
 * Return: Height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefth, righth;

	lefth = 0;
	righth = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		lefth = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		righth = binary_tree_height(tree->right) + 1;

	return (lefth > righth ? lefth : righth);
}
