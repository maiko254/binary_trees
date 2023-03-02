#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: height of binary tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0;
	size_t rh = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		lh = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		rh = binary_tree_height(tree->right) + 1;
	
	return ((lh > rh) ? lh : rh);
}
