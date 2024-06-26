#include "binary_trees.h"
/**
 *binary_tree_is_leaf - checks if a node is a leaf
 *@node: te node to check
 *Return: 1 if it is a leaf, 0 if node is NULL or is not a leaf
 *
 *
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}
