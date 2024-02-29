#include "binary_trees.h"

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

	if (tree->left != NULL)
		l = binary_tree_balance(tree->left) + 1;
	if (tree->right != NULL)
		r = binary_tree_balance(tree->right) + 1;

	return (l - r);
}
