#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 *
 * Return: height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	left = (1 + binary_tree_height(tree->left));
	right = (1 + binary_tree_height(tree->right));
	if (left > right)
		return (left);
	else
		return (right);
}
