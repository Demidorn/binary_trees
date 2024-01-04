#include "binary_trees.h"

/**
 * binary_tree_is_full- shows if tree is full
 * @tree: root of tree
 *
 * Return: 1 for full tree or 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full_2(tree))
		return (1);
	return (0);
}

/**
 * binary_tree_is_full_2- shows if tree is full
 * @tree: root of tree
 *
 * Return: 1 for full tree or 0 otherwise
 */

int binary_tree_is_full_2(const binary_tree_t *tree)
{
	int result;

	if (tree == NULL)
		return (1);
	if (!tree->left && !tree->right)
		return (1);
	if ((!tree->left && tree->right)
	|| (tree->left && !tree->right))
		return (0);
	result = binary_tree_is_full_2(tree->left)
	&& binary_tree_is_full_2(tree->right);
	return (result);
}
