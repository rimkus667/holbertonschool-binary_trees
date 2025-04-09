#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count
 *
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree);

int main(void)
{
	binary_tree_t *root;
	size_t nodes;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);

	binary_tree_print(root);

	nodes = binary_tree_nodes(root);
	printf("Nodes in %d: %lu\n", root->n, nodes);

	return (0);
}
