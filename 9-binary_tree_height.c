#include "binary_trees.h"
/**
 * binary_tree_height - the height of the binary tree
 * @tree: the binary tree
 * Return: 0 for NULL root
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return ((l_height > r_height ? l_height : r_height) + 1);
}
