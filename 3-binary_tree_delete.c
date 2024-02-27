#include "binary_trees.h"


/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	postorder(tree);
}

/**
 * postorder - Traverses a binary tree using postorder traversal
 * @root: Pointer to the root node of the binary tree
 *
 * Return: void
 */
void postorder(binary_tree_t *root)
{
	if (root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	free(root);
}
