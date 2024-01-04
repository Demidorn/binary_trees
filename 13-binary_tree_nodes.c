#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to the root node of the
 * tree to count the number of nodes
 *
 * Return: 0 when succesfull
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size_2(tree) - binary_tree_leaves_2(tree));
}

/**
 * binary_tree_leaves_2- count number of leaves in the tree
 * @tree: root of tree
 *
 * Return: number of leaves
 */

size_t binary_tree_leaves_2(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	else
	{
		left = (binary_tree_leaves_2(tree->left));
		right = (binary_tree_leaves_2(tree->right));
	}
	return (left + right);
}


/**
 * tree_size_2- count size of tree recursevely
 * @tree: root of tree
 *
 * Return: size of tree
 */

size_t tree_size_2(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = (1 + tree_size_2(tree->left));
	right = (1 + tree_size_2(tree->right));
	return (left + right);
}

/**
 * binary_tree_size_2- gives size of a binary tree
 * @tree: root of tree
 *
 * Return: size of binary tree
 */

size_t binary_tree_size_2(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((tree_size_2(tree)) / 2);
}
