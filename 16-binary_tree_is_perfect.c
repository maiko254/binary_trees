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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect
 *         0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height == 0 && right_height == 0)
		return (1);

	if (left_height == right_height && binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right))
		return (1);

	return (0);
}
