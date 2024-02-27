#include "binary_trees.h"


/**
 * binary_tree_inorder - traverses a binary tree using inorder traversal
 * @tree: pointer to root node of tree to traverse
 * @func: Pointer to function that prints value of each node
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
