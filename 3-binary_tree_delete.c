#include "binary_trees.h"
/**
 * binary_tree_delete - deletes the whole tree
 * @tree: root of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *right, *left;
	if (tree == NULL)
		return;
	right = tree->right;
	left = tree->left;
	free(tree);
	binary_tree_delete(right);
	binary_tree_delete(left);
}
