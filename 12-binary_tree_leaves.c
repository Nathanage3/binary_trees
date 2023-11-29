#include "binary_trees.h"
/**
 * binary_tree_leaves - leaves of binary tree
 * @tree: binary tree
 * Return: the numbers of binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);
	a = binary_tree_leaves(tree->left);
	b = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (a + b);
}
