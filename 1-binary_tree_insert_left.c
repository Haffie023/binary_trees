#include "binary_trees.h"
/**
 * binary_tree_insert_left - adds a new node on the tree
 * @parent: parent of the node to add.
 * @value: value of the new node
 * Return: new added node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent ==NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->right = NULL;
	new->n = value;
	new->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = new;
		new->left = NULL;
	}
	else
	{
		temp = parent->left;
		parent->left = new;
		new->left = temp;
		temp = new->left;
		temp->parent = new;
	}
	return (new);
}
