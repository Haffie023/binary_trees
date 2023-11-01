#include "binary_trees.h"
/**
 * binary_tree_is_leaf - determine if a node given is a leaf or not
 * @node: node to check.
 * Return: 0 if not else 1 if true.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
