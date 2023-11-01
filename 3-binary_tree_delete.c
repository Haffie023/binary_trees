#include "binary_trees.h"
/**
 * binary_tree_delete - deletes the whole tree
 * @tree: root of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	free(tree->right);
	free(tree->left);
	free(tree);
}
