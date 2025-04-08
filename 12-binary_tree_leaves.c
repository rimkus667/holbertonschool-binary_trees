#include "binary_trees.h"
/**
 * binary_tree_leaves - Compte les feuilles d'un arbre binaire
 * @tree: Pointeur vers la racine de l'arbre pour compter les feuilles
 * Return: Nombre de feuilles, 0 si arbre NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

		if (tree->left == NULL && tree->right == NULL)
			return (1);

			return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
