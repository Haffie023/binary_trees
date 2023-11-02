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
 * binary_tree_height- determines the height of the tree.
 * @tree: parent to start from
 * Return: numbe of height below that parent.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	return (max(binary_tree_height(tree->left),
				binary_tree_height(tree->right)) + 1);
}
