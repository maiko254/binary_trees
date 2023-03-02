#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height + 1 : right_height + 1);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_depth;
	int right_depth;

	if (tree == NULL)
		return (0);

	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);

	if (left_depth == right_depth)
	{
		if (left_depth == 0)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
