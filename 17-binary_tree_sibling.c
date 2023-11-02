#include "binary_trees.h"
/**
 * binary_tree_sibling - finds a sibing to the given node.
 * @node: node to work on
 * Return: the sibling if any else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return NULL;
	parent = node->parent;
	if (parent == NULL)
		return NULL;
	if (parent->right == node)
		return (parent->left);
	if (parent->left == node)
		return (parent->right);
	return (NULL);
}
