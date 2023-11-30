#include "binary_trees.h"
/**
 * leftmost_depth - the left depth
 * @node: node of the binary tree
 *
 * Return: the left most depth
 */
size_t leftmost_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	while (node)
	{
		depth++;
		node = node->left;
	}
	return	(depth);
}
/**
 * is_perfect_recursive - helper for is perfect binary tree
 * @tree: tree
 * @depth: the depth calculted
 * @level: current level of node
 * Return: True if the depth of both wings equal
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t level)
{
	int a, b;

	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	a = is_perfect_recursive(tree->left, depth, level + 1);
	b = is_perfect_recursive(tree->right, depth, level + 1);

	return (a && b);
}
/**
 * binary_tree_is_perfect - perfect tree
 * @tree: binary tree
 * Return: 1 for the perfect tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = leftmost_depth(tree);
	return (is_perfect_recursive(tree, depth, 0));

}
