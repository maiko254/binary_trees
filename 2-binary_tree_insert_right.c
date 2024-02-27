#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as right child of another node
 * @parent: Pointer to node to insert new node in
 * @value: Integer value to store in new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;
	newnode->left = NULL;

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		newnode->right->parent = newnode;
	}

	parent->right = newnode;
	return (newnode);
}
