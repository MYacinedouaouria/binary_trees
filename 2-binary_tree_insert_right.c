#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserts a node as the right child of another node
 *@parent: a pointer to the node to insert the right child in
 *@value: the value to store in the new node
 *Return: NULL if it fail , else a pointer to the new node
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		parent->right->parent = new;
		new->right = parent->right;
		parent->right = new;
	}
	else
	{
		parent->right = new;
	}
	return (new);
}
