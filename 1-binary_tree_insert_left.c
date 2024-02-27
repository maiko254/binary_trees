#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Pointer to node to insert the left-child in
 * @value: Value to put in the new node
 *
 * Return: Pointer to the newly inserted node
 *         NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	if (parent == NULL)
		return (NULL);

	leftnode = malloc(sizeof(binary_tree_t));
	if (leftnode == NULL)
		return (NULL);

	leftnode->n = value;
	leftnode->parent = parent;
	leftnode->right = NULL;
	leftnode->left = NULL;

	if (parent->left != NULL)
	{
		leftnode->left = parent->left;
		leftnode->left->parent = leftnode;
	}

	parent->left = leftnode;

	return (leftnode);
}
