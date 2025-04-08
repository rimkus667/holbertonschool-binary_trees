#include "binary_trees.h"
/**
 * binary_tree_postorder - parcours post-order d'un arbre binaire
 * @tree: pointeur vers la racine de l'arbre que je vais parcourir
 * @func: pointeur vers une fonction qui sera appelée pour chaque nœud traversé
 * Return: Rien car type de retour void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
