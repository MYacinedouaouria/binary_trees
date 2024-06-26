#include "binary_trees.h"
/**
 *binary_tree_insert_left - inserts a node as the left child of another node
 *@parent: a pointer to the node to insert the left_child in
 *@value: the value to store in the new node
 *Return: a pointer to the new node or NULL on failure or NULL if it fail
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new = binary_tree_node(parent, value);
		if (new == NULL)
			return (NULL);
		parent->left->parent = new;
		new->left = parent->left;
		parent->left = new;
	}
	else
	{
		new = binary_tree_node(parent, value);
		if (new == NULL)
			return (NULL);
		parent->left = new;
	}
	return (new);
}
