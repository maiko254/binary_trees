#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: NULL on failure or if parent is NULL
 *         A pointer to the created node otherwise
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *temp;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = newnode;
		temp->parent = newnode;
		parent->right->right = temp;

		return (newnode);
	}

	parent->right = newnode;
	return (newnode);


}
