#include "binary_trees.h"
/**
 * binary_tree_is_root - checking if binary tree is root
 * @node: the tree to be tested
 *
 * Return: 1 if root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);
	return (node->parent == NULL);

}
