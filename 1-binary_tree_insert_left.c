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
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL || parent == NULL)
		return (NULL);	
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = newi;
	};
	return (new);
}
