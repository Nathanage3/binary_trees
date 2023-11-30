#include "binary_trees.h"
/**
 * binary_tree_nodes - a function to count the node
 * @tree: the tree of the node
 * Return: the number of nodes the parent has
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);
	a = binary_tree_nodes(tree->left);
	b = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + a + b);
	return (a + b);
}

