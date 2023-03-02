#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: NULL on failure or if parent is NULL
 *         A pointer to the created node on success
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *tempnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		tempnode = parent->left;
		tempnode->parent = newnode;
		parent->left = newnode;
		parent->left->left = tempnode;

	}
	else
		parent->left = newnode;

	return (newnode);
}
