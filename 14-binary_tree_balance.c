#include "binary_trees.h"
/**
 *height - returns the height of a tree
 *@tree: a pointer to the root of a tree
 *Return: 0 if root is NULL
 *
 *
 */
static int height(const binary_tree_t *tree)
{
	int r, l;

	if (tree == NULL)
		return (0);
	l = height(tree->left);
	r = height(tree->right);
	if (l >= r)
		return (l + 1);
	else
		return (r + 1);
}
/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: a pointer to the root of the tree to measure the balance factor
 *Return: the balance factor, 0 if root is NULL
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree->left) - height(tree->right));
}
