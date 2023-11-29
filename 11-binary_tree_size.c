#include "binary_trees.h"
/**
 * binary_tree_size - the size of bianry tree
 * @tree: tree
 * Return: the size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);
	a = binary_tree_size(tree->left);
	b = binary_tree_size(tree->right);
	return (1 + a + b);
}
