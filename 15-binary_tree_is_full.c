#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if binary tree full
 * @tree: a binary tree
 *
 * Return: 1 if the binary tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int a, b;

	if (tree == NULL)
		return (0);
	a = binary_tree_is_full(tree->left);
	b = binary_tree_is_full(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (a && b);
	return (0);
}
