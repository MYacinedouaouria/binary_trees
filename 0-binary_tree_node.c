#include "binary_trees.h"
/**
 *binary_tree_node - creates a binary tree node
 *@parent: the parent node of the node to be created
 *@value: the value to put in the new node
 *Return: NULL if it fail, else a pointer to the new node
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
