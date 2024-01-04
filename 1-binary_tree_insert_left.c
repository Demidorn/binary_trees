#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts node to the left
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: Node on the left side of the tree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
