#include "binary_trees.h"
/**
 * binary_tree_balance - binary tree balance
 * @tree: binary tree
 * Return: the height difference from left to right
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int a, b;

	if (tree == NULL)
		return (0);
	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);
	return (a - b);
}
/**
 * binary_tree_height - height of the binary tree
 * @tree: tree
 *
 * Return: heigth of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);
	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);

	return ((a > b ? a : b) + 1);
}
