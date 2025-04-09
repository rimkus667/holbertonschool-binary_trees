#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 * Return: Height or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (1 + (left > right ? left : right));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node
 * Return: Balance factor (left height - right height)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);

	left = (int)binary_tree_height(tree->left);
	right = (int)binary_tree_height(tree->right);

	return (left - right);
}
