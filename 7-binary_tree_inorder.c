#include "binary_trees.h"
/**
 * binary_tree_inorder - Parcourt un arbre en utilisant l'inorder
 * @tree: pointeur sur le nœud racine de l'arbre à parcourir
 * @func: pointeur vers une fonction à appeler pour chaque nœud
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
