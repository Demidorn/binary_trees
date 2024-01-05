#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary node
 * @parent: root of the node
 * @value: integer values stored in the node
 *
 * Return: created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
