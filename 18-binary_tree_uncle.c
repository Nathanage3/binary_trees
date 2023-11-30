#include "binary_trees.h"
/**
 * binary_tree_uncle - sibling of a node's parent.
 * @node: the node to retrieve the the binary tree
 *
 * Return: the uncle to the given node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *g_parent;

	parent = node->parent;
	g_parent = parent->parent;
	if (node == NULL || node->parent == NULL || g_parent == NULL)
		return (NULL);
	if (parent == g_parent->left)
		return (g_parent->right);
	else
		return (g_parent->left);
}
