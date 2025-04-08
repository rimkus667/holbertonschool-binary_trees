#include "binary_trees.h"
/**
 * binary_tree_preorder - Parcours un arbre en pré-ordre
 * @tree: Pointeur sur le nœud racine de l'arbre à parcourir
 * @func: Pointeur vers une fonction à appeler pour chaque nœud
 * Return: Rien car type de retour void
 */

 void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);

    binary_tree_preorder(tree->right, func);
}
