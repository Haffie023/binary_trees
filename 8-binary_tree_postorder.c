#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal.
 * @tree: the tree to traverse.
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * If tree or func is NULL, do nothing.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
