#include "binary_trees.h"
/**
 *binary_tree_height - calculates the height of a tree
 *@tree: a pointer to the root nod of the tree
 *Return: the height of the tree
 *
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	size_t l = binary_tree_height(tree->left);

	size_t r = binary_tree_height(tree->right);

	return ((l > r ? l : r) + 1);
}
