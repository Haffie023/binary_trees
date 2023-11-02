#include "binary_trees.h"
/**
 * max- finds the maximum value between two numbers
 * @a: first value
 * @b: second value
 * Return: the maximum
 */
size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}
/**
 * binary_tree_depth- determines the depth of the tree frm a node.
 * @tree: parent to start from
 * Return: numbe of height below that parent.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	return (max(binary_tree_depth(tree->parent), 0) + 1);
}
