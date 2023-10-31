#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a new node to the right.
 * @parent:parent f the new node
 *@value: value of the newly created node
 * Return: the address f the created nde
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->n = value;
	new->parent = parent;
	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
	}
	else
	{
		temp = parent->right;
		parent->right = new;
		new->right = temp;
		temp = new->right;
		temp->parent = new;
	}
	return (new);
}
