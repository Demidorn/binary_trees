#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree:  pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 on success
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_height_2(tree->left);
	right = binary_tree_height_2(tree->right);
	return (left - right);
}


/**
 * binary_tree_height_2 - measure the highest high of a tree
 * @tree: root of the tree
 *
 * Return: height of tree
 */

size_t binary_tree_height_2(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = (1 + binary_tree_height_2(tree->left));
	right = (1 + binary_tree_height_2(tree->right));

	if (left > right)
		return (left);
	return (right);
}
