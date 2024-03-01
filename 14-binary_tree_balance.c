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
		lefth = binary_tree_height(tree->left);
	if (tree->right != NULL)
		righth = binary_tree_height(tree->right);

	return (1 + (lefth > righth ? lefth : righth));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: Pointer to the root node of tree to measure the balance factor
 *
 * Return: Balance factor
 *         0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	l = 0;
	r = 0;

	if (tree == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	return (l - r);
}
