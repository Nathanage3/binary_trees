#include "binary_trees.h"
/**
 * binary_tree_sibling - nodes at the same depth;
 * @node: the node of the binary tree
 *
 * Return: 1 if the nodes are at the same level
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node && node->parent->right != NULL)
		return (node->parent->right);
	if (node->parent->right == node && node->parent->left != NULL)
		return (node->parent->left);
	return (NULL);
}
