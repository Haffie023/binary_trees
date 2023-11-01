#include "binary_trees.h"
/**
 * binary_tree_is_root - determine if the given node is a root or not.
 * @node: node to check.
 * Return: 1 if found to be root else 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		return (0);
	return (1);
}
