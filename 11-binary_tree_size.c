#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((tree_size(tree)) / 2);
}

/**
 * tree_size - recursive size of tree
 * @tree:  pointer to the root node of the tree
 *
 * Return: double size of tree
 */

size_t tree_size(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = (1 + tree_size(tree->left));
	right = (1 + tree_size(tree->right));

	return (left + right);
}
