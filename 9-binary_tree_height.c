#include "binary_trees.h"
size_t count(binary_tree_t tree, counter)
{
	if (tree->right || tree->left)
	{
		counter++;
	}
	return (counter);
}
/**
 * binary_tree_height- determines the height of the tree.
 * @tree: parent to start from
 * Return: numbe of height below that parent.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter;

	counter = count(tree, 0);
	return (counter);
